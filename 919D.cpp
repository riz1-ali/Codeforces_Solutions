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
vector<ll> adj[300010];
ll indeg[300010],dp[300010][26];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,u,v,left;
	deque<ll> dq;
	string s,t;
	cin>>n>>m;
	cin>>t;
	s=" "+t;
	left=n;
	lp(m)
	{
		cin>>u>>v;
		adj[u].pb(v);
		indeg[v]++;
	}
	lpi(i,1,n)
		if(!indeg[i])
		{
			dq.pb(i);
			dp[i][s[i]-'a']=1;
		}
	while(!dq.empty())
	{
		ll curr=dq.front();
		dq.pop_front();
		left--;
		for(auto it:adj[curr])
		{
			lp(26)
				dp[it][i]=max(dp[it][i],dp[curr][i]+(s[it]-'a' == i));
			indeg[it]--;
			if(!indeg[it])
				dq.pb(it);
		}
	}
	if(left)
	{
		cout<<"-1\n";
		return 0;
	}
	ll ans=-1;
	lpi(j,1,n)
		lp(26)
			ans=max(ans,dp[j][i]);
	cout<<ans<<endl;
	return 0;
}