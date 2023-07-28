//18:21:26 2023-07-18 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)

#define ll long long
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
    ll a,b,c;
  cin>>a>>b>>c;
  if((a+b+c)%9==0&&min(a,min(b,c))>=(a+b+c)/9)
  cout<<"YES\n";
  else
  cout<<"NO\n";
  
 
     }
return 0;
}