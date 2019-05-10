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
vector<ll> adj[200010];
bool trav[200010];
map<ll,ll> val;
ll sums[200010],ans=0,tans=0;
void dfs_ini(ll n,ll d)
{
	if(trav[n])
		return;
	trav[n]=1;
	sums[n]=val[n];
	tans+=sums[n]*d;
	for(auto it:adj[n])
		if(!trav[it])
		{
			dfs_ini(it,d+1);
			sums[n]+=sums[it];
		}
	trav[n]=0;
}
void dfs_fix(ll n)
{
	if(trav[n])
		return;
	trav[n]=1;
	ans=max(ans,tans);
	for(auto it:adj[n])
		if(!trav[it])
		{
			tans-=sums[it];
			sums[n]-=sums[it];
			tans+=sums[n];
			sums[it]+=sums[n];
			dfs_fix(it);
			sums[it]-=sums[n];
			tans-=sums[n];
			sums[n]+=sums[it];
			tans+=sums[it];
		}
	trav[n]=0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a,b;
	cin>>n;
	lp(n)
	{
		cin>>a;
		val[i+1]=a;
	}
	lp(n-1)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	dfs_ini(1,0);
	dfs_fix(1);
	cout<<ans<<endl;
	return 0;
}
