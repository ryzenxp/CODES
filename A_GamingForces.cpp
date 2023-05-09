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
                      int c=0;
                      for(int i=0;i<n;i++){
                           int x;
                           cin>>x;
                           c+=(x==1);
                      }
                      cout<<n-c/2<<"\n";             
                         
                         
}
return 0;
}