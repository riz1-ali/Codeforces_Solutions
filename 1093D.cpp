#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
const ll mod = 998244353;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
vector<ll> adj[300010];
bool trav[300010];
ll indeg[300010],assign[300010],o,e;
bool check;
void bfs(ll n)
{
	trav[n]=1;
	if(assign[n])
		o++;
	else
		e++;
	for(auto it:adj[n])
	{
		if(!trav[it])
		{
			assign[it]=!assign[n];
			bfs(it);
		}
		else if(assign[it]==assign[n])
			check=1;
	}

}
ll powers(ll a, ll b)
{
	ll ans=1;
	a%=mod;
	while(b>0)
	{
		if(b%2==1)
			ans=((ans%mod)*(a%mod))%mod;
		b/=2;
		a=((a%mod)*(a%mod))%mod;
	}
	return ans%mod;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,u,v,ans=1;
		cin>>n>>m;
		lpi(i,1,n)
			adj[i].resize(0),trav[i]=0,indeg[i]=0,assign[i]=0;
		lp(m)
		{
			cin>>u>>v;
			adj[u].pb(v);
			adj[v].pb(u);
			indeg[u]++;
			indeg[v]++;
		}
		check=0;
		lpi(i,1,n)
		{
			if(check)
			{
				ans=0;
				break;
			}
			if(!trav[i])
			{
				o=0,e=0;
				bfs(i);
				ans=(((powers(2,o)+powers(2,e))%mod)*(ans%mod))%mod;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}