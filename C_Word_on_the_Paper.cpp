#include <iostream>
#include <string>

using namespace std;

string ext(string g[8]) {
    string w;
    for (int j = 0; j < 8; ++j) {
        for (int i = 0; i < 8; ++i) {
            if (g[i][j] != '.') {
                w += g[i][j];
            }
        }
    }
    return w;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int te = 1; te <= t; ++te) {
        string g[8];
        for (int i = 0; i < 8; ++i) {
            getline(cin, g[i]);
        }

        string w = ext(g);
        cout << w << endl;
    }

    return 0;
}
