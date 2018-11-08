#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
map<ll,int> m2;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
  	ll n;
  	cin>>n;	 
	ll a[n+1];
	ll pre[n+1];
	ll suff[n+1];
	map<ll,int> m1;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	pre[0]=0;
	for(int i=1;i<=n;i++)
	{
		pre[i]=pre[i-1]+a[i];
	  	m1[pre[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
	  	suff[i]=pre[n]-pre[i-1];
	  	m2[suff[i]]=i;
	}
	if(pre[n]%2)
	{
		cout<<"NO\n";
	  	return 0;
	}
	ll half=pre[n]/2;
	if(m1[half])
	{
	 	cout<<"YES\n";
	  	return 0;
	}
	for(int i=1;i<=n;i++)
	{
	  	if(m2[half+a[i]] and m2[half+a[i]]<=i)
	  	{
	  		cout<<"YES\n";
	  		return 0;
	  	}
	 	if(m1[half+a[i]]>=i)
	  	{
	  		cout<<"YES\n";
	  		return 0;
	  	}
	}
	cout<<"NO\n";
	return 0;
}