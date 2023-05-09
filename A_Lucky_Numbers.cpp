//13:16:17 2023-04-12 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define For(i, a, b) for (ll i = (a); i <= (b); i++)
#define Rof(i, a, b) for (ll i = (a); i >= (b); i--)
#define ll long long
int main() {
int N;
cin>>N;
     while(N--){
        ll x,y,t=0;
        cin>>x>>y;

        string s;
         map<int,string>m;
        For(i,x,y){
            
            s[t]=i;
            t++;
            sort(s.begin(),s.end());
              m.insert({(abs(s[0]-s[s.size()])),s});
        }

         auto maxElem = m.begin();
    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it->first > maxElem->first) {
            maxElem = it;
        }
    }
cout << maxElem->second  << endl;
   
  
 
     }
return 0;
}