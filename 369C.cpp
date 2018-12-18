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
ll counts[100010];
bool trav[100010],prob[100010];
void dfs(ll n,ll p)
{
	if(trav[n])
		return;
	trav[n]=1;
	counts[n]=prob[n];
	for(auto it:adj[n])
		if(!trav[it])
			dfs(it,n),counts[n]+=counts[it];
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,u,v,t;
	cin>>n;
	lp(n-1)
	{
		cin>>u>>v>>t;
		adj[u].pb(v);
		adj[v].pb(u);
		if(t==2)
			prob[u]=prob[v]=1;
	}
	dfs(1,-1);
	vector<int> ans;
	lpi(i,1,n)
		if(prob[i] && counts[i]==1)
			ans.pb(i);
	cout<<ans.size()<<endl;
	for(auto it:ans)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}