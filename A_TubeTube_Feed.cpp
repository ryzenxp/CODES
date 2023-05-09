//21:50:31 2023-04-24 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
        int x,y;
        cin>>x>>y;
        int ar[x],br[x];
        f(0,x)cin>>ar[i];
        f(0,x)cin>>br[i];
        int a=0,b=0;
        for(int i=0;i<x;i++){
          if(a<br[i]&& ar[i]<=y){
            a=br[i];
            
            b=i;
          }
          y--;
        }
        if(a==0){
            cout<<"-1"<<endl;
        }
        else{
        cout<<b+1<<endl;}
        

       
  
 
     }
return 0;
}
