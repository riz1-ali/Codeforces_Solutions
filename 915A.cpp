#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	int rem=INT_MAX;
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		if(k%arr[i]==0)
		{
			if(k/arr[i]<rem)
				rem=k/arr[i];
		}
	}
	cout<<rem<<endl;
	return 0;
}