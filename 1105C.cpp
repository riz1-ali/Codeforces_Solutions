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
ll dp[200010][3];
ll mat[3];
ll floors(ll a,ll b)
{
	return a/b;
}
ll ceils(ll a,ll b)
{
	if(a<=0)
		return 0;
	if(a%b==0)
		return a/b;
	else
		return (a/b)+1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,l,r;
	cin>>n>>l>>r;
	for(int i=1;i<=3;i++)
		mat[i%3]=floors(max(r+3-i,0ll),3ll)-ceils(max(l+3-i,0ll),3ll)+1;
	for(ll i=0;i<3;i++)
		dp[1][i]=mat[i];
	for(ll i=2;i<=n;i++)
	{
		dp[i][0]=((dp[i-1][0]*mat[0])%mod+(dp[i-1][1]*mat[2])%mod+(dp[i-1][2]*mat[1])%mod)%mod;
		dp[i][1]=((dp[i-1][0]*mat[1])%mod+(dp[i-1][1]*mat[0])%mod+(dp[i-1][2]*mat[2])%mod)%mod;
		dp[i][2]=((dp[i-1][0]*mat[2])%mod+(dp[i-1][1]*mat[1])%mod+(dp[i-1][2]*mat[0])%mod)%mod;
	}
	cout<<dp[n][0]<<endl;
	return 0;
}
