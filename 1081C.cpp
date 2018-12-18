

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
const ll mod=998244353;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
ll ncr[2010][2010];
void ncrs(ll n,ll r)
{
	if(r==0 || n==1 || r==n || n==0)
	{
		ncr[n][r]=1;
		return;
	}
	if(r>n)
	{
		ncr[n][r]=0;
		return;
	}
	if(r==1)
	{
		ncr[n][r]=n;
		return;
	}
	ncr[n][r]=((ncr[n-1][r-1])%mod+(ncr[n-1][r])%mod)%mod;
	return;
}
ll powers(ll a,ll b)
{
	ll ans=1;
	while(b>0)
	{
		if(b%2)
			ans=(ans*a)%mod;
		b/=2;
		a=(a*a)%mod;
	}
	return ans%mod;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	lp(2010)
		lpi(j,0,2009)
			ncrs(i,j);
	ll n,m,k;
	cin>>n>>m>>k;
	cout<<(((((ncr[n-1][k])%mod)*(powers(m-1,k)))%mod)*(m))%mod<<endl;
	return 0;
}