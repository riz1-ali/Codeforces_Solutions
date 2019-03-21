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
ll arr[5010];
int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	ll n,q,l,r;
	vector<pll> v;
	cin>>n>>q;
	for(ll i=0;i<=n;i++)
		arr[i]=0;
	lp(q)
	{
		cin>>l>>r;
		for(ll i=l;i<=r;i++)
			arr[i]++;
		v.pb(mp(l,r));
	}
	ll ans=0;
	for(ll i=0;i<q;i++)
	{
		for(ll j=v[i].f;j<=v[i].s;j++)
			arr[j]--;
		vector<ll> tt;
		ll c=0;
		for(ll j=1;j<=n;j++)
			if(arr[j]==1)
				tt.pb(j);
			else if(arr[j]==0)
				c++;
		for(ll j=i+1;j<q;j++)
			ans=max(ans,n-c-(upper_bound(tt.begin(),tt.end(),v[j].s)-lower_bound(tt.begin(),tt.end(),v[j].f)));
		for(ll j=v[i].f;j<=v[i].s;j++)
			arr[j]++;
	}
	cout<<ans<<endl;
	return 0;
}
