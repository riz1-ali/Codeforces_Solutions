#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int arr[601];
	for(i=0;i<601;i++)
		arr[i]=0;
	int x;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr[x]++;
	}
	int c=0;
	for(i=1;i<601;i++)
	{
		if(arr[i]!=0)
			c++;
	}
	cout<<c<<endl;
	return 0;
}