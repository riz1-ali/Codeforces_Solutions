#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,s;
	cin>>n>>s;
	ll arr[n],i,ans=0;
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	ans+=abs(s-arr[(n-1)/2]);
	if(ans==0)
	{
		cout<<"0\n";
		return 0;
	}
	else if(s>arr[(n-1)/2])
	{
		for(i=((n-1)/2)+1;i<n;i++)
		{
			if(arr[i]<s)
			{
				ans+=s-arr[i];
			}
			else
				break;
		}
	}
	else
	{
		for(i=((n-1)/2)-1;i>=0;i--)
		{
			if(arr[i]>s)
				ans+=arr[i]-s;
			else
				break;
		}
	}
	cout<<ans<<endl;
	return 0;
}