#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,x,i,t;
long long mod =pow(10,6)+3;
long long ans[mod+1];
ans[0]=1;
for(i=1;i<=mod;i++)
{
ans[i]= (ans[i-1]%mod*i%mod)%mod;
}
cin>>t;
while(t--)
{
cin>>n>>x;
if(n>=mod)
{
cout<<0<<endl;
}
else
cout<< (x%mod*ans[n]%mod)%mod<<endl;
}
}