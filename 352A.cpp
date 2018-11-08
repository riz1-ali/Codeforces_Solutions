#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i,sum=0,j,rem=0,f=0;
	int count[6];
	for(i=0;i<6;i++)
		count[i]=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		count[arr[i]]++;
	}
/*	for(i=0;i<6;i++)
		cout<<count[i]<<" ";
	cout<<endl;*/
	if(count[0]==0)
		cout<<"-1\n";
	else
	{
		sort(arr,arr+n);
		for(i=count[0];i<n;i++)
		{
			if(sum%9==0)
				break;
			sum-=arr[i];
			count[arr[i]]--;
		}
		for(i=5;i>=1;i--)
		{
			if(count[i]!=0)
			{
				for(j=count[i];j>0;j--)
					cout<<i;
				f=1;
			}
		}
		if(f==0)
			cout<<"0";
		else
		{
			for(j=count[0];j>0;j--)
					cout<<0;
		}		
		cout<<endl;
	}
	return 0;
}