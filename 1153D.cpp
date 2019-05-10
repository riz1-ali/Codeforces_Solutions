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
ll op[300010],dp[300010];
vector<ll> adj[300010];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a;
	cin>>n;
	for(ll i=1;i<=n;i++)
		cin>>op[i];
	for(ll i=2;i<=n;i++)
	{
		cin>>a;
		adj[a].pb(i);
	}
	ll leaf=0;
	for(ll i=n;i>0;i--)
	{
		if(adj[i].size()==0)
		{
			dp[i]=1;
			leaf++;
			continue;
		}
		if(op[i])
		{
			dp[i]=1e18;
			for(auto it:adj[i])
				dp[i]=min(dp[i],dp[it]);
		}
		else
		{
			dp[i]=0;
			for(auto it:adj[i])
				dp[i]+=dp[it];
		}
	}
	cout<<leaf-dp[1]+1<<endl;
	return 0;
}
