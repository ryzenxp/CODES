//20:27:45 2023-05-06 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
    int n;
        cin >> n;

        int l = 0;
        int c = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a == 0) {
                c++;
            } else {
                l = max(l, c);
                c = 0;
            }
        }

        
        l = max(l, c);

        cout << l<< endl;
  
 
     }
return 0;
}