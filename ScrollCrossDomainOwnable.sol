// SPDX-License-Identifier: MIT
pragma solidity ^0.8.16;

import { IL2ScrollMessenger } from "@scroll-tech/contracts/L2/IL2ScrollMessenger.sol";
import { Ownable } from "@openzeppelin/contracts/access/Ownable.sol";

/// @title SrollCrossDomainOwnable
/// @author Worldcoin, OPLabsPBC
/// @notice This contract extends the OpenZeppelin `Ownable` contract for L2 contracts to be owned
///         by contracts on either L1 or L2. Note that this contract is meant to be used with
///         systems that use the ScrollMessenger system.
/// @dev Fork of CrossDomainOwnable3 from @eth-optimism/contracts-bedrock/contracts/L2/CrossDomainOwnable3
abstract contract ScrollCrossDomainOwnable is Ownable {
    /// @notice The L2ScrollMessenger is used to check whether a call is coming from L1.
    /// @dev Sepolia address on Scroll for the L2ScrollMessenger:
    /// https://docs.scroll.io/en/developers/scroll-contracts/
    address scrollMessengerAddress = address(0xBa50f5340FB9F3Bd074bD638c9BE13eCB36E603d);
    IL2ScrollMessenger public messenger = IL2ScrollMessenger(scrollMessengerAddress);

    /// @notice If true, the contract uses the cross domain _checkOwner function override.
    ///         If false it uses the standard Ownable _checkOwner function.
    bool public isLocal = true;

    /// @notice Emits when ownership of the contract is transferred. Includes the
    ///         isLocal field in addition to the standard `Ownable` OwnershipTransferred event.
    /// @param previousOwner The previous owner of the contract.
    /// @param newOwner      The new owner of the contract.
    /// @param isLocal       Configures the `isLocal` contract variable.
    // old event
    // event OwnershipTransferred(address indexed previousOwner, address indexed newOwner, bool isLocal);
    // new  Issue:  but it deviates from the standard OpenZeppelin naming convention.
    event CrossDomainOwnershipTransferred(address indexed previousOwner, address indexed newOwner, bool isLocal);

    /// @notice Emitted when the Scroll Messenger address is updated.
    event MessengerAddressUpdated(address indexed previousAddress, address indexed newAddress);

    /// @notice Allows for ownership to be transferred with specifying the locality.
    /// @param _owner   The new owner of the contract.
    /// @param _isLocal Configures the locality of the ownership.

    ///////////////////////////////////////////////////////////////////
    ///                            ERRORS                           ///
    ///////////////////////////////////////////////////////////////////

    /// @notice Emitted when an attempt is made to set an address to zero
    error AddressZero();
    error NotOwner();
    error NotMessenger();
    error InvalidCaller();

    function transferOwnership(address _owner, bool _isLocal) external onlyOwner {
        // require(_owner != address(0), "ScrollCrossDomainOwnable: new owner is the zero address");

        if (_owner == address(0)) {
            revert AddressZero();
        }

        // address oldOwner = owner();
        _transferOwnership(_owner);
        isLocal = _isLocal;

        emit OwnershipTransferred(msg.sender, _owner);
        emit CrossDomainOwnershipTransferred(msg.sender, _owner, _isLocal);
    }

    /// @notice Overrides the implementation of the `onlyOwner` modifier to check that the unaliased
    ///         `xDomainMessageSender` is the owner of the contract. This value is set to the caller
    ///         of the L1ScrollMessenger.
    function _checkOwner() internal view override {
        if (isLocal) {
            if (owner() != msg.sender) {
                revert NotOwner();
            }
        } else {
            if (msg.sender != address(messenger)) {
                revert NotMessenger();
            }
            if (owner() != messenger.xDomainMessageSender()) {
                revert InvalidCaller();
            }
        }
    }
    /// @notice Allows the owner to update the messenger address in case it changes.
    /// @param _newMessengerAddress The new address of the Scroll Messenger.
    function updateMessengerAddress(address _newMessengerAddress) external onlyOwner {
        // require(
        //     _newMessengerAddress != address(0),
        //     "ScrollCrossDomainOwnable: new messenger address cannot be zero address"
        // );

        if (_newMessengerAddress == address(0)) {
            revert AddressZero();
        }
        address oldAddress = scrollMessengerAddress;
        scrollMessengerAddress = _newMessengerAddress;
        messenger = IL2ScrollMessenger(scrollMessengerAddress);
        emit MessengerAddressUpdated(oldAddress, _newMessengerAddress);
    }
}
