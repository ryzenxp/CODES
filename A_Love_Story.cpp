//20:17:29 2023-05-06 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
   
     string s;
        cin >> s;

        string target = "codeforces";
        int d = 0;

        for (int i = 0; i < 10; i++) {
            if (s[i] != target[i]) {
                d++;
            }
        }

        cout << d << endl;
  
 
     }
return 0;
}