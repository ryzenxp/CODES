//21:25:48 2023-07-25 
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
    
      int p,k;
        cin>>p>>k;
        vector<int>a(p);
        for(int i=0;i<p;i++){
            cin>>a[i];
        }
        int Z=0;
        int Y=0;
        bool an=true;
        for(int i=0;i<p;i++){
            if(a[i]==a[0])Z++;
            if(a[i]==a[p-1]){
                if(Z<k)
                an=false;
                Y++;
            }
        }
        if(Y<k||Z<k)an=false;
        if(a[0]==a[p-1]&&Z>=k)an=true;
        if(an)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }  
   
  
 
//******************************************************************************
     }
return 0;
}