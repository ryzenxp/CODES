//17:11:07 2023-07-26 
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
   int n,k,i,x,y,j,ans=0,temp;
    cin >> n >> k;
    if(k>30) cout <<0 <<endl;
    else
    {
        for(i=1; i<=n; i++) {
            x=i;
            y=n-x;
            for(j=1; j<k-1; j++) {
                if(y<=x && y>=0) {
                    temp=x;
                    x=y;
                    y=temp-y;
                }
                else break;
                if(j==k-2) ans++;
            }
        }
        cout << ans << endl;
 
    }
    

    
   
  
 
//******************************************************************************
     }
return 0;
}