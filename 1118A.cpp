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
	int t;
	cin>>t;
	while(t--)
	{
		ll n,a,b,ans=0;
		cin>>n>>a>>b;
		if(2*a<b)
			ans=n*a;
		else
		{
			ans+=(n/2)*b;
			if(n%2==1)
				ans+=a;
		}
		cout<<ans<<endl;
	}
	return 0;
}
