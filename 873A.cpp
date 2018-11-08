#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x,t=0;
	cin>>n>>k>>x;
	int arr[n],i;
	for(i=0;i<n;i++)
		cin>>arr[i];
	t+=k*x;
	for(i=0;i<n-k;i++)
		t+=arr[i];
	cout<<t<<endl;
	return 0;
}