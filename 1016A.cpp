#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,i;
	cin>>n>>m;
	ll arr[n];
	lp(i,n)
		cin>>arr[i];
	ll page=0,sum=0;
	lp(i,n)
	{
		page+=arr[i];
		cout<<page/m<<" ";
		page%=m;
	}
	cout<<endl;
	return 0;
}