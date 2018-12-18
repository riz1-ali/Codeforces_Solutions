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
set<pll> edge[110];
set<ll> color;
bool trav[110];
void dfs(ll u,ll v,ll c)
{
	if(trav[u])
		return;
	if(u==v)
	{
		color.insert(c);
		return;
	}
	trav[u]=1;
	for(auto it:edge[u])
		if(!trav[it.f])
			if(c==-1)
				dfs(it.f,v,it.s);
			else if(it.s==c)
				dfs(it.f,v,it.s);
	trav[u]=0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,u,v,c,q;
	cin>>n>>m;
	lp(m)
	{
		cin>>u>>v>>c;
		edge[u].insert(mp(v,c));
		edge[v].insert(mp(u,c));
	}
	cin>>q;
	while(q--)
	{
		cin>>u>>v;
		dfs(u,v,-1);
		cout<<color.size()<<endl;
		color.clear();
	}
	return 0;
}