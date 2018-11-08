#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
char s[5010];
ll dp[5010][5010],suf[5010];
int main()
{
	int n;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		s[i]=c;
	}
	dp[1][0]=1;
	for(int i=2;i<=n;i++)
	{
		suf[n+1]=0;
		for(int j=n;j>=0;j--)
			suf[j]=(suf[j+1]+dp[i-1][j])%mod;
		for(int j=0;j<=n;j++)
		{
			if(s[i-1]=='s')
				dp[i][j]=suf[j];
			else
				dp[i][j]=dp[i-1][j-1];
		}
	}
	ll ans=0;
	lp(n+1)
		ans=(ans+dp[n][i])%mod;
	cout<<ans<<endl;
	return 0;
}