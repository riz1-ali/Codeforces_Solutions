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
set<pll> glo,tem;
bool check(ll n,ll N)
{
	ll v1,v2;
	for(auto it:glo)
	{
		v1=it.f+n;
		v2=it.s+n;
		if(v1>N)
			v1=v1%N;
		if(v2>N)
			v2=v2%N;
		tem.insert(mp(min(v1,v2),max(v1,v2)));
	}
	return glo==tem;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,a,b;
	cin>>n>>m;
	lp(m)
	{
		cin>>a>>b;
		glo.insert(mp(min(a,b),max(a,b)));
	}
	set<ll> fact;
	for(ll i=1;i*i<=n;i++)
		if(n%i==0)
		{
			fact.insert(i);
			fact.insert(n/i);
		}
	fact.erase(n);
	for(auto it:fact)
	{
		tem.clear();
		if(check(it,n))
		{
			cout<<"Yes\n";
			return 0;
		}
	}
	cout<<"No\n";
	return 0;
}
