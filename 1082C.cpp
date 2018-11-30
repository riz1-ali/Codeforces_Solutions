#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(int i=s;i>=e;i--)
#define lpi(i,s,e) for(int i=s;i<=e;i++)
#define lp(i,n) for(ll i=0;i<n;i++)
vector<ll> adj[100010];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,s,r;
	cin>>n>>m;
	vector<pair<ll,ll> > arr;
	ll ans[n];
	lp(i,n)
	{
		cin>>s>>r;
		arr.pb(mp(s,r));
		ans[i]=0;
	}
	sort(arr.begin(),arr.end(),greater<pair<ll,ll> >());
	lp(i,n)
		adj[arr[i].f].pb(arr[i].s);
	lpi(i,1,m)
	{
		for(int j=0;j<adj[i].size();j++)
		{
			if(j)
				adj[i][j]+=adj[i][j-1];
			if(adj[i][j]>0)
				ans[j]+=adj[i][j];
		}
	}
	ll solve=0;
	lp(i,n)
		solve=max(solve,ans[i]);
	cout<<solve<<endl;
	return 0;
}