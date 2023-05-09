//18:03:27 2023-04-27 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
          int n,input;
    cin >> n;
        vector<long long> a, b;
        int zero = 0;
        for(int i = 0;i < n;i++){
            cin >> input;
            if(input >= 0){
                a.push_back(input);
                zero = 1;
            }
            else if(input < 0)b.push_back(input);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a.size() == 1 && b.size() == 1){
            cout << a[0] * b[0] << '\n';
        }
        else if(a.size() < 2){
            cout << b[0] * b[1] << '\n';
        }
        else if(b.size() < 2)
            cout << a[a.size()-2] * a.back() << '\n';
        else cout << max(b[0] * b[1], a[a.size()-2] * a.back()) << '\n';

  
     }
return 0;
}