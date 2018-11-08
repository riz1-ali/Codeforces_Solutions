#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int arr[n],min=INT_MAX,ans=INT_MAX;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	int dist=-1;
	for(i=0;i<n;i++)
	{
		if(min==arr[i])
		{
			if(dist==-1)
				dist=i;
			else if(i-dist<ans)
				ans=i-dist;
			dist=i;
		}
	}
	cout<<ans<<endl;
	return 0;
}