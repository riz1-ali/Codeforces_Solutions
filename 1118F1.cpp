#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(ll i=0;i<n;i++)
map<ll,ll> color,indeg;
set<ll> adj[300010];
set<ll> red,blue;
ll ans=0;
pll dfs(ll n,ll p)
{
	ll r=0,b=0;
	if(color[n]==1)
		r=1;
	if(color[n]==2)
		b=1;
	for(auto it:adj[n])
		if(it!=p)
		{
			auto t=dfs(it,n);
			if(t.s==0 and t.f==red.size())
				ans++;
			if(t.f==0 and t.s==blue.size())
				ans++;
			r+=t.f,b+=t.s;
		}
	return mp(r,b);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a,b;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a;
		color[i]=a;
		indeg[i]=0;
		if(a==1)
			red.insert(i);
		else if(a==2)
			blue.insert(i);
	}
	for(ll i=1;i<n;i++)
	{
		cin>>a>>b;
		indeg[a]++;
		indeg[b]++;
		adj[a].insert(b);
		adj[b].insert(a);
	}
	ll min_in=1e9,ver=1;
	for(ll i=1;i<=n;i++)
	{
		if(indeg[i]<min_in)
		{
			min_in=indeg[i];
			ver=i;
		}
	}
	dfs(ver,-1);
	cout<<ans<<endl;
	return 0;
}
