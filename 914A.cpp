#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i,k;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for(i=n-1;i>=0;i--)
	{
		k=sqrt(arr[i]);
		if(pow(k,2)!=arr[i])
		{
			cout<<arr[i]<<endl;
			break;
		}
	}
	return 0;
}