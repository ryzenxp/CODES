//20:34:20 2023-05-06 
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
      cin>>n;
      int l,m,p;
      while(n--){
        int a,b;
        cin>>a>>b;
        if(b%100==11){
            p=min(200000,a);
            
        }
        
       else if(b%10==1){
            l=min(200000,a);

        }
        else if(b%100==1){
            m=min(200000,a);
        }
      }
      if(p<(l+m)){
        cout<<p<<endl;
      }
      else{
        cout<<(l+m)<<endl;
      }

  
 
     }
return 0;
}