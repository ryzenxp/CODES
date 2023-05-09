//20:11:52 2023-04-04 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        string x=to_string(b);
        if(b==0){
            s+=x[0];
            cout<<s<<endl;
            return;
        }
        for(ll i=0;i<a;i++){
            if(s[i]<x[0]){
                s.insert(i,x);
                cout<<s<<endl;
                return;
                    }}
                    s+=x[0];
                    cout<<s<<endl;


}
int main() {
ll N;
cin>>N;
     while(N--){    
       solve();
                           
                         
                     }

return 0;
}