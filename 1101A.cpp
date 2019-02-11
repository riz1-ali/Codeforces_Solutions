#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=998244353;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll q,l,r,d,ans;
	cin>>q;
	while(q--)
	{
		cin>>l>>r>>d;
		ans=d;
		if(ans<l || ans>r)
			cout<<ans<<endl;
		else
		{
			ans*=(r/d);
			while(ans<=r)
				ans+=d;
			cout<<ans<<endl;
		}
	}
	return 0;
}
