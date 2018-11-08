#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int arr[n],i,c=0;
	for(i=0;i<n;i++)
		cin>>arr[i];
	if(n<3)
		cout<<"0\n";
	else
	{
		for(i=1;i<n-1;i++)
		{
			if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))
				c++;
		}
//		cout<<c<<endl;
		for(i=1;i<n-1;i++)
		{
			if((arr[i]<arr[i-1])&&(arr[i]<arr[i+1]))
				c++;
		}
		cout<<c<<endl;
	}
	return 0;
}