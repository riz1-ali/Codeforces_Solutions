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
	return a.f-a.s > b.f-b.s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	vector<pll> v;
	pll p;
	lp(n)
	{
		cin>>p.f>>p.s;
		v.pb(p);
	}
	sort(v.begin(),v.end(),comp);
	ll ans=0;
	lp(n)
		ans+=v[i].f*i+(n-i-1)*v[i].s;
	cout<<ans<<endl;
	return 0;
}
