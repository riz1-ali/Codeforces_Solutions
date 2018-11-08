#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int sum=0,n,x;
	ll arr[1005];
	cin>>n;
	for(x=0;x<n;x++)
		cin>>arr[x];
	sort(arr,arr+n);
	for(x=1;x<n;x++)
	{
		sum+=arr[x]-arr[x-1]-1;
	}
	cout<< sum <<endl;
	return 0;
}