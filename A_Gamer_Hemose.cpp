//21:31:22 2023-04-25 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
int main() {
ll Nx;
cin>>Nx;
     while(Nx--){
   ll n,h;
   cin>>n>>h;
   ll a[n];
   f(0,n){
    cin>>a[i];
   }
   sort(a,a+n);
  cout<<(h/(a[n-1]+a[n-2])*2)+(h%(a[n-1]+a[n-2])>0)+(h%(a[n-1]+a[n-2])>a[n-1])<<'\n';
  
  
 
     }
return 0;
}