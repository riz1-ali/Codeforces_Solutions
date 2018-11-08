#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i,f,l,j;
	cin>>n;
	l=n;
	char arr[n];
	cin>>arr;
	for(i=0;i<n-1;i++)
	{
		if((arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='y')&&(arr[i+1]=='a' || arr[i+1]=='e' || arr[i+1]=='i' || arr[i+1]=='o' || arr[i+1]=='u' || arr[i+1]=='y'))
		{
			l=0;
			for(j=0;j<n;j++)
			{
				if(j!=i+1)
				{
					arr[l++]=arr[j];
				}
			}
			i=-1;
			arr[l]='\0';
			n=l;
//			cout<<arr<<endl;
		}
	}
	cout<<arr<<endl;
	return 0;
}