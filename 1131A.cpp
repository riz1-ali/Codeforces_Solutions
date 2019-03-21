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
	ll w1,h1,w2,h2,ans=0;
	cin>>w1>>h1>>w2>>h2;
	ans = (w2+2)*(h2+2)-w2*h2-w2-2;
	// cout<<ans<<endl;
	ans+=(w1+2)*(h1+2)-w1*h1-w2-2;
	cout<<ans<<endl;
	return 0;
}
