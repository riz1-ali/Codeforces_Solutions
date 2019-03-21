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
bool trav[200010];
vector<ll> adj[200010];
ll indeg[200010],reach[200010];
ll line=0;
bool comp(ll a,ll b)
{
	return indeg[a]>indeg[b];
}
ll N,m,a,b;
void dfs(ll n)
{
	if(trav[n] || line==N-1)
		return;
	trav[n]=1;
	vector<ll> v;
	for(auto it:adj[n])
	{
		if(!trav[it] and !reach[it])
		{
			line++;
			reach[it]=1;
			v.pb(it);
			cout<<n<<" "<<it<<endl;
		}
		if(line==N-1)
			break;
	}
	for(auto it:v)
	{
		indeg[n]--;
		indeg[it]--;
	}
	sort(v.begin(),v.end(),comp);
	for(auto it:v)
		dfs(it);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>N>>m;
	lp(m)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
		indeg[a]++;
		indeg[b]++;
	}
	vector<pll> v;
	for(ll i=1;i<=N;i++)
		v.pb(mp(indeg[i],i));
	sort(v.begin(),v.end(),greater<pll>());
	// cout<<v[0].f<<" "<<v[0].s<<endl;
	// cout<<"---\n";
	reach[v[0].s]=1;
	dfs(v[0].s);
	return 0;
}
