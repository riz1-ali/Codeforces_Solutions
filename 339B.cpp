#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i;
	cin>>n>>m;
	int arr[m];
	for(i=0;i<m;i++)
		cin>>arr[i];
	long long int c=arr[0];
	c--;
	for(i=1;i<m;i++)
	{
	    if(arr[i-1]<arr[i])
			c+=arr[i]-arr[i-1];
		else if(arr[i-1]>arr[i])
			c+=n-arr[i-1]+arr[i];
	}
	cout<<c<<"\n";
	return 0;
}