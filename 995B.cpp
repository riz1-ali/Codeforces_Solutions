#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,j,ans=0,temp;
	cin>>n;
	int arr[2*n];
	lp(i,2*n)
		cin>>arr[i];
	i=0;
	j=0;
	while(i<2*n)
	{
		if(arr[i]==arr[i+1])
			i+=2;
		else
		{
			j=i+1;
			while(j<2*n)
			{
				if(arr[i]==arr[j])
					break;
				j++;
			}
			// cout<<i<<" "<<j<<endl;
			ans+=j-i-1;
			while(j>i+1)
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
				j--;
			}
			i+=2;
		}
	}
	cout<<ans<<endl;
	return 0;
} 