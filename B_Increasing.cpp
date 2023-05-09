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
              ll ar[n];
              for(int i=0;i<n;i++){
                cin>>ar[i];
              } 
              int count=0;  
              
              sort(ar,ar+n);     
              for(int i=0;i<n-1;i++){
                 if (ar[i]<ar[i+1]){
                    count++;
                }
              }
              if(count==n-1){
                cout<<"YES"<<endl;}
              else{
              cout<<"NO"<<endl;
              }      
                         
}
return 0;
}