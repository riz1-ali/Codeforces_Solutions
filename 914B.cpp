#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i,k;
	cin>>n;
	ll arr[n],count[100010]={0},max=-1;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		count[arr[i]]++;
		if(arr[i]>max)
			max=arr[i];
	}
	for(i=max;i>=0;i--)
	{
		if(count[i]!=0 && count[i]%2!=0)
		{
			cout<<"Conan\n";
			return 0;
		}
	}
	cout<<"Agasa\n";
	return 0;
}