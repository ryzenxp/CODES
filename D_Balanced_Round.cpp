//21:32:01 2023-07-21 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
//******************************************************************************
    
  
 ll a , b;
 cin >> a >> b;
 ll arr[a];
 for(ll i = 0; i < a; i++) cin >> arr[i];
 sort(arr , arr+ a);
 int r =0;
 ll ans = 0;
 while(r < a)
 {
 int j = r + 1;
 while(j < a){
 if(arr[j] - arr[j - 1] > b){
 break;
 }
 j++;
 }
 ll t = j - r;
 ans = max(ans , t);
 r = j;
 }
 cout << a - ans << endl;
   
  
 
//******************************************************************************
     }
return 0;
}