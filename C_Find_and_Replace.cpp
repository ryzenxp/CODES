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
    
   
   string s;
    cin>>s;
    map<char,int >m;
  int count=0;
    for(int i=0;i<n;i++){
      if(m.find(s[i])!=m.end()){
        if(m[s[i]]!= i%2){
            count=1;
            break;
        }
      }
      else{
        m[s[i]] = i%2;
            
        
    
      }
    }  

    if(count){
        cout<<"NO"<<endl;
    }                    
    else{
        cout<<"YES"<<endl;
    }  
                  
                         
}
return 0;
}