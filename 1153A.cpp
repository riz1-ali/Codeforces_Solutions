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
ll ceils(ll n,ll d)
{
	if(n%d==0)
		return n/d;
	return (n/d)+1ll;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,t,a,b,ans=0,cur_t=1e18;
	cin>>n>>t;
	lp(n)
	{
		cin>>a>>b;
		ll ft;
		if(a>=t)
			ft=a;
		else
			ft=a+ceils(t-a,b)*b;
		if(ft-t<cur_t-t)
		{
			cur_t=ft;
			ans=i+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
