#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
	int q;
	cin>>q;
	while(q--)
	{
		ll ang,ans=180,k,act=1e15;
		cin>>ang;
		ll g=gcd(ang,ans);
		ang/=g,ans/=g;
		if(ang+1!=ans)
			cout<<ans<<endl;
		else
			cout<<2*ans<<endl;
	}
	return 0;
}
