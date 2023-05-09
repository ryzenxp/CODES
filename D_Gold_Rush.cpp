//21:34:26 2023-05-06 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
bool check(ll a,ll b){
    if(a==b) return true;
    if(b>a || a%3!=0 ) return false;
    return check(a/3,b)||check(a-a/3,b);
}
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
     ll a,b;
     cin>>a>>b;
     check(a,b)==true?cout<<"YES"<<endl:cout<<"NO"<<endl;
  
 
     }
return 0;
}