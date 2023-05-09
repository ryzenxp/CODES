//11:36:43 2023-04-20 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
      string s;
      cin>>s;
      string a;
      int count=0;
     
       if(s[0]=='_'){
        
        count++;
      }
      if(s[s.size()-1]=='_'){
        
        count++;
      }
    //   cout<<s<<endl;
      
      f(0,s.size()-1){
        if ((s[i]==s[i+1])&& (s[i]=='_'))
            count++;
      }
       if(s.size()==1){
        if(s[0]=='_'){
            count=2;
        }
        else{
            count=1;
        }
      }
      cout<<count<<endl;
  
      
     }
return 0;
}