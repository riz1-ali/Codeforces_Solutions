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
#define all(v) v.begin(),v.end()
vector<pll> adj[200010];
bool trav[200010];
ll zeroc[200010],onec[200010];
vector<ll> mark;
ll dfs(ll n,ll t)
{
	if(trav[n])
		return 0;
	trav[n]=1;
	mark.pb(n);
	ll c=1;
	for(auto it:adj[n])
		if(!trav[it.f] and it.s==t)
			c+=dfs(it.f,t);
	return c;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a,b,c;
	cin>>n;
	lp(n-1)
	{
		cin>>a>>b>>c;
		adj[a].pb(mp(b,c));
		adj[b].pb(mp(a,c));
	}
	ll ans=0,m;
	for(ll i=1;i<=n;i++)
		if(!trav[i])
		{
			mark.clear();
			m=dfs(i,0);
			ans+=m*(m-1);
			for(ll j=0;j<mark.size();j++)
				zeroc[mark[j]]=m;
		}
	for(ll i=1;i<=n;i++)
		trav[i]=0;
	for(ll i=1;i<=n;i++)
		if(!trav[i])
		{
			mark.clear();
			m=dfs(i,1);
			ans+=m*(m-1);
			for(ll j=0;j<mark.size();j++)
				onec[mark[j]]=m;
		}
	for(ll i=1;i<=n;i++)
		ans+=(zeroc[i]-1)*(onec[i]-1);
	cout<<ans<<endl;
	return 0;
}
