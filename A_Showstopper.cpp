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
   int ar[n],br[n];
   vector<int>v1,v2;
   for(int i=0;i<n;i++){
    cin>>ar[i];

   }    for(int i=0;i<n;i++){

     cin>>br[i];
   }  
   for(int i=0;i<n;i++){
    //   if(ar[i]>br[i]){
    //     v1.push_back(ar[i]);
    //     v2.push_back(br[i]);
    //   }
       if(ar[i]<br[i]){
        v2.push_back(ar[i]);
        v1.push_back(br[i]);
      }
      else{
        v1.push_back(ar[i]);
        v2.push_back(br[i]);
      }
   }  
   int m=*max_element(v1.begin(),v1.end()),ma=*max_element(v2.begin(),v2.end());
   if((m<=v1[n-1])&&(ma<=v2[n-1])){
    cout<<"YES"<<endl;
   }                  
   else{
    cout<<"No"<<endl;
   } 
                         
                         
}
return 0;
}