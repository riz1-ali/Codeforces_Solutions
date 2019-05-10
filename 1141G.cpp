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
ll indeg[200010],maxc;
vector<pll> key;
map<pll,ll> color,edge_trav;
void dfs_fix(ll n,ll c)
{
	for(auto it:adj[n])
	{
		if(!edge_trav[mp(min(n,it),max(n,it))])
		{
			color[mp(min(n,it),max(n,it))]=c;
			c++;
			if(c>maxc)
				c=1;
			edge_trav[mp(min(n,it),max(n,it))]=1;
			dfs_fix(it,c);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,a,b;
	cin>>n>>k;
	lp(n-1)
	{
		cin>>a>>b;
		indeg[a]++;
		indeg[b]++;
		adj[a].pb(b);
		adj[b].pb(a);
		key.pb(mp(min(a,b),max(a,b)));
		color[key[i]]=1;
		edge_trav[key[i]]=0;
	}
	vector<pll> fin;
	for(ll i=1;i<=n;i++)
		if(indeg[i]>1)
			fin.pb(mp(indeg[i],i));
	sort(fin.begin(),fin.end());
	ll t=k;
	while(t and !fin.empty())
	{
		t--;
		fin.pop_back();
	}
	if(fin.size()==0)
		maxc = 1;
	else
		maxc = fin[fin.size()-1].f;
	cout<<maxc<<endl;
	for(auto it:fin)
		dfs_fix(it.s,1);
	for(auto it:key)
		cout<<color[it]<<" ";
	cout<<endl;
	return 0;
}
