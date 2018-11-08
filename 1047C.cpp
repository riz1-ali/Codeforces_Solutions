#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
int main()
{
	ios_base::sync_with_stdio(0);
	ll n,i,j,gcd,maxi=-1,ans=-1;
	int cnt[15000001]={0},mark[15000001]={0}; 
	cin>>n;
	ll a[n+2];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
		maxi=max(maxi,a[i]);
	}
	gcd=a[0];
	for(i=1;i<n;i++)
		gcd=__gcd(a[i],gcd);
	for(i=gcd+1;i<=maxi;i++)
	{
		ll cnt2 = 0;
		if(!mark[i])
		{
			for(j=i;j<=maxi;j+=i)
			{
				mark[j]=1;
				cnt2+=cnt[j];
			}
			ans=max(ans,cnt2);
		}
	}
	if(maxi==gcd)
		cout<<"-1\n";
	else
		cout<<n-ans<<endl;
	return 0;
}