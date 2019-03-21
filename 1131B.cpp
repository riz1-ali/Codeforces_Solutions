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
	ll n,a,b,ans;
	cin>>n;
	set<pll> mmt;
	lp(n)
	{
		cin>>a>>b;
		mmt.insert(mp(a,b));
	}
	ans=1,a=0,b=0;
	for(auto it:mmt)
	{
		if(a==b)
		{
			ans+=min(it.f-a,it.s-b);
			a=it.f,b=it.s;
			continue;
		
		}
		else if(a>b)
		{
			if(it.s<a)
			{
				a=it.f,b=it.s;
				continue;
			}
			else
			{
				pll x = it;
				x.s-=a;
				b=a;
				ans++;
				x.f-=a;
				ans+=min(x.f,x.s);
				a=it.f,b=it.s;
				continue;
			}
		}
		else
		{
			if(it.f<b)
			{
				a=it.f,b=it.s;
				continue;
			}
			else
			{
				pll x = it;
				x.f-=b;
				a=b;
				ans++;
				x.s-=b;
				ans+=min(x.f,x.s);
				a=it.f,b=it.s;
				continue;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
