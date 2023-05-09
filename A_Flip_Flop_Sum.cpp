//SANDEEP CHAUHAN
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int N;
cin>>N;
 while(N--){
              int n;
              cin>>n;
              int ar[n];
              for(int i=0;i<n;i++){
                cin>>ar[i];
              }    
              sort(ar,ar+n);
              for(int i=0;i<2;i++){
                if(ar[i]==-1){
                    ar[i]==1;
                }
                else{
                    ar[i]==-1;
                }
              }
             int ans=0;
             for(int i=0;i<n;i++){
                ans+=ar[i];
             }
             cout<<ans<<endl;
                         
                         
}
return 0;
}