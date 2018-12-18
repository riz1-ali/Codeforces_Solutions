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
set<ll> adj[100010],sec[100010];
bool trav[100010];
ll sub[100010];
ll dfs(ll n,ll p)
{
	if(trav[n])
		return sub[n];
	trav[n]=1;
	sub[n]=1;
	for(auto it:adj[n])
		if(!trav[it])
			dfs(it,n),sub[n]++;
	if(sub[n]%2==0)
	{
		if(sec[n].find(p)!=sec[n].end())
		{
			sub[n]--;
			sub[p]--;
			sec[p].erase(n);
			sec[n].erase(p);
		}
	}
	trav[n]=0;
	return sub[n];
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,u,v;
	cin>>n;
	lp(n-1)
	{
		cin>>u>>v;
		adj[u].insert(v);
		adj[v].insert(u);
		sec[u].insert(v);
		sec[v].insert(u);
	}
	if(n%2)
	{
		cout<<"-1\n";
		return 0;
	}
	dfs(1,-1);
	int ans=0;
	lpi(i,1,n)
		ans+=adj[i].size()-sec[i].size();
	cout<<ans/2<<endl;
	return 0;
}