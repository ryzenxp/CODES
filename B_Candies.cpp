//17:38:27 2023-04-09 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define For(i, a, b) for (ll i = (a); i < (b); i++)
#define Rof(i, a, b) for (ll i = (a); i >= (b); i--)

int main() {
int N;
cin>>N;
     while(N--){         
        ll n ;
vector<ll>v;
        cin >> n;
 
        if (n % 2)
        {
            while (n > 1)
            {
                
                if ((n - 1) / 2 % 2)
                {
                    v.push_back(2);
                    n = (n - 1) / 2;
                    
                }
                else
                {
                    v.push_back(1);
                    n = (n + 1) / 2;
                    
                }
            }
            cout << v.size() << endl;
            Rof(i, v.size() - 1, 0)
                    cout
                << v[i] << " ";
            cout << endl;
 
            v.clear();
        }
        else
        {
            cout << -1 << endl;
        }               
                         
                         
                     }
return 0;
}