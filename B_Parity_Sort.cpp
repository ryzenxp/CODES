//21:14:37 2023-07-25 
//〄 S░A░N░D░E░E░P 〄
#include<bits/stdc++.h>
using namespace std;
#define f( a, b) for (ll i = (a); i < (b); i++)
#define ll long long
#define pb push_back
int main() {
int Nx;
cin>>Nx;
     while(Nx--){
//******************************************************************************
    
    
   ll w, m, i, j, k;
  cin>>w;
  vector<ll> v(w);
  for(i=0;i<w;i++)
    cin>>v[i];
  vector<ll> od,e;
  vector<ll> new_arr;
  for(i=0;i<w;i++)
  {
    if(v[i]&1)
    od.pb(v[i]);
    else
    e.pb(v[i]);
  }
  sort(e.begin(),e.end());
  sort(od.begin(),od.end());
  ll odd_p=0,even_p=0;
  for(i=0;i<w;i++)
  {
    if(v[i]&1)
    {
           new_arr.pb(od[odd_p]);
       ++odd_p;
    }
    else
    {

          new_arr.pb(e[even_p]);
      ++even_p;
    }
  }
  if(is_sorted(new_arr.begin(),new_arr.end()))
  cout<<"YES\n";
  else
  cout<<"NO\n";

  
 
//******************************************************************************
     }
return 0;
}