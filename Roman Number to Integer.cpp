#include <bits/stdc++.h>
using namespace std;
int value(char c)
{
if(c=='I')
return 1;
else if(c == 'V')
return 5;
else if(c == 'X')
return 10;
else if(c == 'L')
return 50;
else if(c == 'C')
return 100;
else if(c == 'D')
return 500;
else if(c == 'M')
return 1000;
return -1;
}
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int n=s.length(),ans=0;
for(int i=0;i<n;i++)
{
    if(value(s[i])<value(s[i+1]) && i<n-1)
    ans-=value(s[i]);
    else
    ans+=value(s[i]);
    }
    cout<<ans<<endl;
    
}
return 0;
}

