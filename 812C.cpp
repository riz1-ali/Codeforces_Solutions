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
ll arr[100010];
ll check(ll val,ll n)
{
	vector<ll> v;
	for(ll i=1;i<=n;i++)
		v.pb(arr[i]+(i*val));
	sort(v.begin(), v.end());
	ll ans=0;
	for(ll i=0;i<val;i++)
		ans+=v[i];
	return ans;
}
ll binarys(ll n,ll s)
{
	ll start=0,end=n+1,mid;
	while(start<end-1)
	{
		mid=(start+end)/2;
		if(check(mid,n)<=s)
			start=mid;
		else
			end=mid;
	}
	return start;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,s;
	cin>>n>>s;
	for(ll i=1;i<=n;i++)
		cin>>arr[i];
	ll ind=binarys(n,s);
	cout<<ind<<" "<<check(ind,n)<<endl;
	return 0;
}