#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a;
	cin>>n>>a;
	long long int arr[n],i;
	for(i=0;i<n;i++)
		cin>>arr[i];
	std::cout << std::fixed;
    std::cout << std::setprecision(10);	
	sort(arr,arr+n);
	double ans=0,e,t;
	for(i=1;i<n;i++)
	{
		e=arr[i]-arr[i-1];
		if(e>ans)
			ans=e;
	}
	if(ans/2>arr[0] && ans/2>a-arr[n-1])
		t=ans/2;
	else
	{
		if(arr[0]>=a-arr[n-1])
			t=arr[0];
		else
			t=a-arr[n-1];
	}
	std::cout<<t<<endl;
	return 0;
}