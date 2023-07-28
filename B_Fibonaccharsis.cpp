//17:11:07 2023-07-26 
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
    ll a,b,n=INT_MAX;
    ll n1=0,n2=1,n3,i; 
    cin>>a>>b;
    ll sum=0,c=0;
    
           for(i=2;i<n;++i) //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
    if(n3==a&& (i>=b)){
        cout<<i<<endl;
        break;
    }
  n1=n2;    
  n2=n3;    
 }    
 
    

    
   
  
 
//******************************************************************************
     }
return 0;
}