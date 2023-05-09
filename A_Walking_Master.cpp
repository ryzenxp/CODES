//SANDEEP CHAUHAN
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int N;
cin>>N;
 while(N--){
   int a,b,x,y;
   cin>>a>>b>>x>>y;
   ll A=x-a;
   ll B=y-b;
   if(A>B||B<0){
    cout<<"-1"<<endl;
    
   }
   else{                 
   cout<<(2*B)-A<<endl;       
   }                 
                         
}
return 0;
}