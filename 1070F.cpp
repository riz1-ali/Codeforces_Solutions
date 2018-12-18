#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
vector<ll> adj[4];
ll sum[500000];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,p,t3=0;
	string s;
	cin>>n;
	lp(n)
	{
		cin>>s>>p;
		if(s=="00")
			adj[0].pb(p);
		if(s=="01")
			adj[1].pb(p);
		if(s=="10")
			adj[2].pb(p);
		if(s=="11")
		{
			t3++;
			adj[3].pb(p);
		}
	}
	lp(4)
		sort(adj[i].begin(),adj[i].end(),greater<ll>());
	ll ans=0;
	for(auto it:adj[3])
		ans+=it;
	if(adj[1].size()>adj[2].size())
		swap(adj[1],adj[2]);
	for(auto it:adj[1])
		ans+=it;
	for(int i=0;i<adj[2].size();i++)
		sum[i+1]=sum[i]+adj[2][i];
	int cur=0,pre=ans;
	for(int i=0;i<=adj[0].size() && i<=t3;i++)
	{
		if(i)
			cur+=adj[0][i-1];
		ans=max(ans,cur+pre+sum[min(ll(adj[1].size()+t3-i),ll(adj[2].size()))]);
	}
	cout<<ans<<endl;
	return 0;
}