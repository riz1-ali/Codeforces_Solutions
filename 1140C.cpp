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
bool comp(pll a,pll b)
{
	if(a.s!=b.s)
		return a.s>b.s;
	return a.f>b.f;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,a,b,ans=0;
	cin>>n>>k;
	vector<pll> v;
	lp(n)
	{
		cin>>a>>b;
		v.pb(mp(a,b));
	}
	sort(v.begin(),v.end(),comp);
	multiset<ll> max_k;
	ll sum=0;
	lp(n)
	{
		sum+=v[i].f;
		max_k.insert(v[i].f);
		while(max_k.size()>k)
		{
			sum -= *max_k.begin();
			max_k.erase(max_k.begin());
		}
		ans=max(ans,sum*v[i].s);
	}
	cout<<ans<<endl;
	return 0;
}
