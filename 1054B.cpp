#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	int n;
	cin>>n;
	int arr[n];
	lp(n)
		cin>>arr[i];
	if(arr[0]!=0)
	{
		cout<<"1\n";
		return 0;
	}
	int maxi;
	lp(n)
	{
		if(i==0)
		{
			maxi=arr[i];
			continue;
		}
		int diff=arr[i]-maxi;
		if(diff>1)
		{
			cout<<i+1<<endl;
			return 0;
		}
		maxi=max(arr[i],maxi);
	}
	cout<<"-1\n";
	return 0;
}