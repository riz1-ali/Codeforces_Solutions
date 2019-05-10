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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,m,mini,ans=0;
	cin>>n>>k>>m;
	map<string,ll> wc;
	vector<string> temp;
	lp(n)
	{
		string s;
		cin>>s;
		temp.pb(s);
	}
	vector<ll> cost;
	lp(n)
	{
		ll val;
		cin>>val;
		cost.pb(val);
	}
	lp(k)
	{
		mini=1e18;
		ll x;
		cin>>x;
		vector<ll> temparr;
		for(ll j=0;j<x;j++)
		{
			ll val;
			cin>>val;
			temparr.pb(val);
			mini=min(mini,cost[val-1]);
		}
		for(ll j=0;j<x;j++)
			cost[temparr[j]-1]=mini;
	}
	lp(n)
		wc.insert(mp(temp[i],cost[i]));
	lp(m)
	{
		string a;
		cin>>a;
		ans+=wc[a];
	}
	cout<<ans<<endl;
	return 0;
}
