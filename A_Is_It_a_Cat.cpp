//08:20:57 2023-04-18 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define For(i, a, b) for (ll i = (a); i < (b); i++)
#define Rof(i, a, b) for (ll i = (a); i >= (b); i--)
#define ll long long
int main() {
int N;
cin>>N;
     while(N--){
        int n;
        cin>>n;
        string s;
        cin>>s;

 char* c = new char[s.length() + 1];
   
    // make sure that the new string is null terminated
    c[s.length()] = '\0';
     
    for (int i = 0; i < s.length(); i++) {
        c[i] = s[i];
    }
    
    set <char>a;
     for(int i=0;i<n;i++){
        a.insert(c[i]);
     }

     if(a.count('m'||'M')&&a.count('e'||'E')&&a.count('o'||'O')&& a.count('w'||'W')){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;     }
        
   
  
 
     }
return 0;
}