#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// Function to check if there are any collisions between words
bool hasCollision(const unordered_map<string, string>& mapping, const vector<string>& words) {
    unordered_map<string, string> encodedWords; // Store encoded words and their mappings
    for (const string& word : words) {
        string encoded = ""; // Initialize empty string for encoded word
        for (const char& c : word) {
            encoded += mapping.at(string(1, c)); // Append mapped digit to encoded word
        }
        if (encodedWords.find(encoded) != encodedWords.end()) {
            // Collision found!
            return true;
        } else {
            encodedWords[encoded] = word; // Store encoded word and its original mapping
        }
    }
    // No collisions found
    return false;
}

int main() {
    int Txx;
    cin >> Txx;

    for (int t = 1; t <= Txx; t++) {
        unordered_map<string, string> mapping;
        for (char c = 'A'; c <= 'Z'; c++) {
            int digit;
            cin >> digit;
            mapping[string(1, c)] = to_string(digit);
        }

        int N;
        cin >> N;

        vector<string> words(N);
        for (int i = 0; i < N; i++) {
            cin >> words[i];
        }

        bool collision = hasCollision(mapping, words);

        cout << "Case #" << t << ": ";
        if (collision) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}
