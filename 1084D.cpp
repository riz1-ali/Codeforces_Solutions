#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
map<ll,ll> gas;
vector<pll> adj[300010];
ll dp[300010],ans=0;
bool trav[300010];
void dfs(ll n,ll p)
{
	if(trav[n])
		return;
	trav[n]=1;
	dp[n]=gas[n];
	ll mix=0,mix2=0,now;
	for(auto it:adj[n])
	{
		if(it.f!=p && !trav[it.f])
		{
			dfs(it.f,p);
			if(dp[it.f]>it.s)
			{
				now=gas[n]+dp[it.f]-it.s;
				if(now>mix)
				{
					mix2=mix;
					mix=now;
				}
				else if(now>mix2)
					mix2=now;
			}
		}
	}
	dp[n]=max(dp[n],mix);
	ans=max(ans,dp[n]);
	ans=max(ans,mix+mix2-gas[n]);
	trav[n]=0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a,u,v;
	cin>>n;
	lpi(i,1,n)
	{
		cin>>a;
		gas[i]=a;
	}
	lp(n-1)
	{
		cin>>u>>v>>a;
		adj[u].pb(mp(v,a));
		adj[v].pb(mp(u,a));
	}
	dfs(1,-1);
	cout<<ans<<endl;
	return 0;
}