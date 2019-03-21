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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	ll ans=0;
	vector<pll> v;
	ll cur_e=0,c=0;
	lp(n)
	{
		if(!i)
		{
			cur_e=arr[i];
			c++;
		}
		else
		{
			if(cur_e==arr[i])
				c++;
			else
			{
				v.pb(mp(cur_e,c));
				cur_e=arr[i];
				c=1;
			}
		}
	}
	if(c!=0)
		v.pb(mp(cur_e,c));
	for(int i=1;i<v.size();i++)
		ans=max(ans,2*min(v[i-1].s,v[i].s));
	cout<<ans<<endl;
	return 0;
}
