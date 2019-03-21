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
	ll a[n],b[n];
	lp(n)
		cin>>a[i];
	lp(n)
		cin>>b[i];
	set<pll> key;
	map<pll,ll> val;
	lp(n)
	{
		ll ta=a[i],tb=b[i],g;
		g=gcd(ta,tb);
		if(g==0)
		{
			if(key.find(mp(tb,ta))==key.end())
			{
				key.insert(mp(tb,ta));
				val[mp(tb,ta)]=1;
			}
			else
				val[mp(tb,ta)]++;
			continue;
		}
		ta/=g,tb/=g;
		tb*=-1;
		if(ta<0)
		{
			ta*=-1;
			tb*=-1;
		}
		if(ta==0)
			continue;
		if(key.find(mp(tb,ta))==key.end())
		{
			key.insert(mp(tb,ta));
			val[mp(tb,ta)]=1;
		}
		else
			val[mp(tb,ta)]++;
	}
	ll ans=0;
	for(auto it:key)
	{
		if(it==mp(0ll,0ll))
			continue;
		ans=max(ans,val[it]);
	}
	if(key.find(mp(0,0))!=key.end())
		ans+=val[mp(0,0)];
	cout<<ans<<endl;
	return 0;
}
