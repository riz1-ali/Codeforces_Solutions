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
	ll n,m;
	cin>>n>>m;
	if(n==0 || m==0)
	{
		cout<<"-1\n";
		return 0;
	}
	if(m%n!=0 || m<n)
	{
		cout<<"-1\n";
		return 0;
	}
	ll ans=0;
	m/=n;
	while(m%2==0)
	{
		m/=2;
		ans++;
	}
	while(m%3==0)
	{
		m/=3;
		ans++;
	}
	if(m!=1)
	{
		cout<<"-1\n";
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}
