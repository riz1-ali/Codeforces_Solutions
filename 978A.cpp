#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lp(i,n) for(i=0;i<n;i++)
map<int,int> m;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i;
	cin>>n;
	int arr[n];
	lp(i,n)
	{
		cin>>arr[i];
		m[arr[i]]=0;
	}
	lp(i,n)
		m[arr[i]]++;
	int copy[n];
	int c=0;
	lp(i,n)
	{
		m[arr[i]]--;
		if(m[arr[i]]==0)
			copy[c++]=arr[i];
	}
	cout<<c<<endl;
	lp(i,c)
		cout<<copy[i]<<" ";
	cout<<endl;
	return 0;
}