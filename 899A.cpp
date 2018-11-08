#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i,x[3],ans=0;
	x[0]=0;
	x[1]=0;
	x[2]=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		x[arr[i]]++;
	}
	if(x[2]<=x[1])
	{
		ans+=x[2];
		x[1]-=x[2];
		ans+=x[1]/3;
	}
	else
	{
		ans+=x[1];
		x[2]-=x[1];
	}
	cout<<ans<<endl;
	return 0;
}