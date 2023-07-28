//20:21:22 2023-07-21 
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
   int a;
   cin>>a;
     int ma=0,in=0;
   for(int i=1;i<=a;i++){
    int x,y;

  
    cin>>x>>y;
    if(x<=10&&y>ma){
        in=i;
    ma=max(ma,y);
    }
   }
 
   
    cout<<in<<endl;
   
  
 
//******************************************************************************
     }
return 0;
}