#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,p,q,r;
	cin>>n>>p>>q>>r;
	ll arr[n+1],i;
	for(i=1;i<=n;i++)
		cin>>arr[i];
	ll dp[3][n+1];
	dp[0][1]=p*arr[0];
	dp[1][1]=dp[0][1]+q*arr[0];
	dp[2][1]=dp[1][1]+r*arr[0];
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			dp[0][1]=p*arr[1];
			dp[1][1]=dp[0][1]+q*arr[1];
			dp[2][1]=dp[1][1]+r*arr[1];
		}
		else
		{
			dp[0][i]=max(dp[0][i-1],p*arr[i]);
			dp[1][i]=max(dp[1][i-1],dp[0][i]+q*arr[i]);
			dp[2][i]=max(dp[2][i-1],dp[1][i]+r*arr[i]);
		}
	}
	cout<<dp[2][n]<<endl;
	return 0;
}