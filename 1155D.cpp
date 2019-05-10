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
ll dp[300010][3][3];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k1;
	cin>>n>>k1;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	lp(n)
		for(ll j=0;j<3;j++)
			for(ll k=0;k<3;k++)
				dp[i][j][k]=-1e18;
	dp[0][0][0]=0;
	lp(n+1)
		for(ll j=0;j<3;j++)
			for(ll k=0;k<3;k++)
			{
				if(k<2)
					dp[i][j][k+1]=max(dp[i][j][k+1],dp[i][j][k]);
				if(j<2)
					dp[i][j+1][k]=max(dp[i][j+1][k],dp[i][j][k]);
				ll jfix,kfix;
				if(j==1)
					jfix=arr[i];
				else
					jfix=0;
				if(k==1)
					kfix=k1;
				else
					kfix=1;
				dp[i+1][j][k]=max(dp[i+1][j][k],dp[i][j][k]+jfix*kfix);
			}
	cout<<dp[n][2][2]<<endl;
	return 0;
}
