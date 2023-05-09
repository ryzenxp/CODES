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
    int e=0,z=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]%2==0){
            e+=ar[i];
        }
        else{
            z+=ar[i];
        }
    } 
    if(e>z){
        cout<<"YES"<<endl;

    }             
    else{
        cout<<"NO"<<endl;
    }

                          
                         
}
return 0;
}