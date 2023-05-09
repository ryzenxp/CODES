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
for(int i=0;i<n;i++)
   cin>>ar[i];
   string s;
   cin>>s;

   int flag=0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(ar[i]==ar[j]&& s[i]!=s[j]){
            flag=1;
        }
    }
   }
   if(flag)
   cout<<"NO"<<endl;
   else
   cout<<"YES"<<endl;


                         
                         
}
return 0;
}