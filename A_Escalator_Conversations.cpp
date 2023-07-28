//21:08:16 2023-07-25 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
//******************************************************************************
    
    int n, m, k, x;
        cin >> n >> m >> k >> x;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        queue<int> q;
        q.push(1);
        q.push(2);
        int sum  =0;
        for(int i=0;i<n;i++){
          int diff = abs(x-v[i]);
          bool flag1 = q.size() && diff%k==0;
          bool flag2 = q.size() && diff<=(m-1)*k;
          bool flag3 = q.size() && diff;
          if(q.size() && flag1 && flag2 && flag3) sum++;
        }
        cout<<sum<<endl;
   
  
 
//******************************************************************************
     }
return 0;
}