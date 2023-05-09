//12:03:49 2023-04-12 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define For(i, a, b) for (ll i = (a); i < (b); i++)
#define Rof(i, a, b) for (ll i = (a); i >= (b); i--)
#define ll long long
int main() {
int N;
cin>>N;
     while(N--){
        ll n,k;
        cin>>n>>k;
        
  if(n%2==0){
            cout<<"YES"<<endl;
        }
        else{
            if(k%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
  
     }
return 0;
}