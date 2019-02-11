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
	ll n,m,k,ans=0;
	cin>>n>>m>>k;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	vector<ll> ans_v;
	vector<pll> val_t;
	lp(n)
		val_t.pb(mp(arr[i],i));
	sort(val_t.begin(),val_t.end(),greater<pll>());
	lp(m*k)
	{
		// cout<<val_t[i].f<<" "<<val_t[i].s<<endl;
		ans+=val_t[i].f;
		ans_v.pb(val_t[i].s+1);
	}
	sort(ans_v.begin(),ans_v.end());
	cout<<ans<<endl;
	ll prev=-1;
	for(int i=0;i<k-1;i++)
	{
		if(!i)
		{
			for(int j=i;j<i+m and j<n;j++)
				prev=max(prev,ans_v[j]);
			cout<<prev<<" ";
		}
		else
		{
			ll tprev=prev;
			for(int j=i*m;j<i*m+m and j<n;j++)
			{
				if(ans_v[j]-tprev>=m)
					prev=max(ans_v[j],prev);
			}
			cout<<prev<<" ";
		}
	}
	cout<<endl;
	return 0;
}
