#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t;
	cin>>n>>t;
	long long int arr[n],i,s=0,j,ans=0,k=0;
	for(i=0;i<n;i++)
		cin>>arr[i];
	i=0;
	j=0;
	while(j<n)
	{
		s+=arr[j];
		k++;
		if(s>t)
		{
			while(s>t && i<n && i<=j)
			{
				s-=arr[i];
				i++;
				k--;
	//			cout<<s<<endl;
			}
		}
		ans=max(k,ans);
		j++;
	}
	cout<<ans<<endl;
	return 0;
}