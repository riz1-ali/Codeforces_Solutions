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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,h,m;
	cin>>n>>h>>m;
	ll hei[n];
	lp(n)
		hei[i]=h;
	ll a,b,c;
	lp(m)
	{
		cin>>a>>b>>c;
		for(ll j=a-1;j<=b-1;j++)
			hei[j]=min(hei[j],c);
	}
	ll ans=0;
	lp(n)
		ans+=hei[i]*hei[i];
	cout<<ans<<endl;
	return 0;
}
