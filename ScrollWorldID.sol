// SPDX-License-Identifier: MIT
pragma solidity ^0.8.15;

import { WorldIDBridge } from "./abstract/WorldIDBridge.sol";
import { IScrollWorldID } from "./interfaces/IScrollWorldID.sol";
import { ScrollCrossDomainOwnable } from "src/ScrollCrossDomainOwnable.sol";

/// @title Scroll World ID Bridge
/// @author Worldcoin
/// @notice Manages the root history of the Semaphore identity merkle tree on Scroll.
/// @dev Deployed on Optimism; used by the L1 Proxy contract for new root insertion.
contract ScrollWorldID is WorldIDBridge, ScrollCrossDomainOwnable, IScrollWorldID {
    ///////////////////////////////////////////////////////////////////////////////
    ///                                CONSTRUCTION                             ///
    ///////////////////////////////////////////////////////////////////////////////

    /// @notice Initializes the contract with the depth of the associated merkle tree.
    /// @param _treeDepth Depth of the Semaphore merkle tree.
    constructor(uint8 _treeDepth) WorldIDBridge(_treeDepth) {}

    ///////////////////////////////////////////////////////////////////////////////
    ///                               ROOT MIRRORING                            ///
    ///////////////////////////////////////////////////////////////////////////////

    /// @notice Receives a new root from the state bridge contract.
    /// @dev Can revert if Scroll's ScrollMessenger stops processing proofs.
    /// @param newRoot The new root value.
    /// @custom:reverts CannotOverwriteRoot If the root already exists.
    /// @custom:reverts UnauthorizedAccess If the caller is not the owner.
    function receiveRoot(uint256 newRoot) external virtual onlyOwner {
        // Ensure the new root is not zero
        require(newRoot != 0, "Invalid root"); // Consider using InvalidInput
        _receiveRoot(newRoot);
    }

    ///////////////////////////////////////////////////////////////////////////////
    ///                              DATA MANAGEMENT                            ///
    ///////////////////////////////////////////////////////////////////////////////

    /// @notice Sets the expiry time for roots in the root history.
    /// @param expiryTime New expiry time for roots.
    /// @custom:reverts UnauthorizedAccess If the caller is not the owner.
    function setRootHistoryExpiry(uint256 expiryTime) public virtual override onlyOwner {
        // Ensure the expiry time is not zero
        require(expiryTime != 0, "Invalid expiry time"); // Consider using InvalidInput
        _setRootHistoryExpiry(expiryTime);
    }

    ///////////////////////////////////////////////////////////////////////////////
    ///                               CUSTOM ERRORS                             ///
    ///////////////////////////////////////////////////////////////////////////////

    /// @dev Error for unauthorized access attempts.
    error UnauthorizedAccess();

    /// @dev Error for attempting to overwrite an existing root.
    error CannotOverwriteRoot();

    /// @dev Error for invalid input.
    error InvalidInput();
}
