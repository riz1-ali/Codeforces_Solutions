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
vector<ll> adj[200010];
bool trav[200010];
map<pll,ll> color;
ll powers(ll a,ll b)
{
	ll ans=1;
	while(b)
	{
		if(b%2)
			ans=(ans*a)%mod;
		a=(a*a)%mod;
		b/=2;
	}
	return ans;
}
ll dfs(ll n)
{
	if(trav[n])
		return 0;
	trav[n]=1;
	ll ans=1;
	for(auto it:adj[n])
		if(!trav[it] and color[mp(min(n,it),max(n,it))]==0)
			ans=(ans+dfs(it)%mod)%mod;
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,a,b,c,ans=0;
	cin>>n>>k;
	lp(n-1)
	{
		cin>>a>>b>>c;
		adj[a].pb(b);
		adj[b].pb(a);
		color[mp(min(a,b),max(a,b))]=c;
	}
	ans=powers(n,k);
	for(ll i=1;i<=n;i++)
		if(!trav[i])
		{
			ll val=dfs(i);
			val=powers(val,k);
			ans=(ans-val+mod*(mod-10))%mod;
		}
	cout<<ans<<endl;
	return 0;
}
