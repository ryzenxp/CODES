//SANDEEP CHAUHAN
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int N;
cin>>N;
 while(N--){
  string s;
		cin>>s;
		sort(s.begin(),s.end());
		if(s[0]==s[3]) puts("-1");
		else if(s[0]==s[2]||s[1]==s[3]) puts("6");
		else puts("4");

    
 }
return 0;
}