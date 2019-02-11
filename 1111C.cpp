#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
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
ll n,k,a,b;
vector<ll> v;
ll powers(ll a,ll b)
{
	ll ans=1;
	while(b)
	{
		if(b%2)
			ans*=a;
		a*=a;
		b/=2;
	}
	return ans;
}
ll func(ll al,ll bu)
{
	ll noe = upper_bound(v.begin(),v.end(),bu)-lower_bound(v.begin(),v.end(),al);
	if(noe==0)
		return a;
	if(bu==al)
		if(noe)
			return b*noe;
	return min(func(al,(al+bu)/2)+func(((al+bu)/2)+1,bu),b*noe*(bu-al+1));
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>k>>a>>b;
	ll c,p=powers(2,n);
	for(ll i=0;i<k;i++)
	{
		cin>>c;
		v.pb(c);
	}
	sort(v.begin(),v.end());
	cout<<func(1,p)<<endl;
	return 0;
}
