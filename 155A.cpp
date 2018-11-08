#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
	ll n,i;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	if(n==1)
	{
		cout<<"0\n";
		return 0;
	}
	// ll maxe,mine=arr[1],ans=1;
	// for(i=2;i<n;i++)
	// 	mine=min(mine,arr[i]);
	// for(i=1;i<n;i++)
	// {
	// 	if(i==1)
	// 	{
	// 		maxe=arr[i];
	// 		if(maxe!=mine)
	// 			ans++;
	// 		continue;
	// 	}
	// 	else
	// 	{
	// 		if(arr[i]>maxe && arr[i]!=mine)
	// 		{
	// 			maxe=arr[i];
	// 			// cout<<i+1<<endl;
	// 			ans++;
	// 		}
	// 	}
	// }
	// cout<<ans<<endl;
	ll maxi=arr[0],mini=arr[0],ans=0;
	for(i=1;i<n;i++)
	{
		if(arr[i]>maxi)
		{
			maxi=arr[i];
			ans++;
		}
		else if(arr[i]<mini)
		{
			mini=arr[i];
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}