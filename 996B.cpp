#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll floort(ll a,ll b)
{
	if(a==0 || a<0)
		return 0;
	if(b>a || b==a)
		return 1;
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
	long long int n,i;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	ll solve[n];
	for(i=0;i<n;i++)
		solve[i]=floort(arr[i]-i,n);
	ll mini=1e10,pos_m=-1;
	for(i=0;i<n;i++)
	{
		if(mini>solve[i])
		{
			mini=solve[i];
			pos_m=i+1;
		}
	}
	cout<<pos_m<<endl;
	return 0;
}