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
vector<ll> adj[100010];
bool trav[100010];
map<ll,ll> path_length,indeg;
ld num=0;
void dfs(ll n,ll d)
{
	if(trav[n])
		return;
	trav[n]=1;
	bool f=1;
	ll c=0;
	for(auto it:adj[n])
		if(!trav[it])
		{
			c++;
			f=0;
			dfs(it,d+1);
		}
	if(f)
		path_length[n]=d;
	indeg[n]=c;
	trav[n]=0;
}
void dfs2(ll n,ll d,ld p)
{
	if(trav[n])
		return;
	bool f=1;
	trav[n]=1;
	for(auto it:adj[n])
		if(!trav[it])
		{
			f=0;
			dfs2(it,d+1,p/indeg[n]);
		}
	if(f)
		num+=d*p;
}
int main()
{
	cout<<fixed<<setprecision(10);
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,u,v;
	cin>>n;
	lp(n-1)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	dfs(1,0);
	dfs2(1,0,1);
	cout<<num<<endl;
	return 0;
}