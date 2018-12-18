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
	ll n;
	cin>>n;
	ll arr[n+1];
	lpi(i,1,n)
		cin>>arr[i];
	ll ans=10000000000;
	lpi(i,1,n)
	{
		ll temp=0,x=i;
		lpi(j,1,n)
			temp+=2*arr[j]*(abs(x-j)+(j-1)+(x-1));
		ans=min(temp,ans);
	}
	cout<<ans<<endl;
	return 0;
}
