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
vector<ll> adj[100010];
ll resp[100010];
ll ans[100010],sz=0;
set<ll> supp;
ll dfs(ll n)
{
	ll val=0,anst=0;
	for(auto it:adj[n])
		if(dfs(it))
			val++;
	if(resp[n])
		anst=1;
	if(adj[n].size()==val and resp[n])
	{
		ans[sz++]=n;
		supp.insert(n);
	}
		// ans.insert(n);
	// cout<<n<<" "<<adj[n].size()<<" "<<val<<" "<<anst<<endl;
	return anst;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,r,a,c;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a>>c;
		if(a==-1)
			r=i;
		else
			adj[a].pb(i);
		resp[i]=c;
	}
	dfs(r);
	if(sz==0)
	{
		cout<<"-1\n";
		return 0;
	}
	// for(ll i=sz-1;i>=0;i--)
	// 	cout<<ans[i]<<" ";
	// cout<<endl;
	for(auto it:supp)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}
