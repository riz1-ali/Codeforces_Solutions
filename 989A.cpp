#include<bits/stdc++.h>
using namespace std;
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
int main()
{
	ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	string s;
	cin>>s;
	int arr[s.size()],i,sum[s.size()-1];
	lpi(i,0,s.size()-1,1)
	{
		sum[i]=0;
		if(s[i]=='.')
			arr[i]=0;
		if(s[i]=='A')
			arr[i]=1;
		if(s[i]=='B')
			arr[i]=100;
		if(s[i]=='C')
			arr[i]=10000;
	}
	lpi(i,0,s.size()-1,1)
	{
		sum[i]+=arr[i];
		if(i==0 || i==s.size()-1)
		{
			if(i==0)
				sum[i+1]+=arr[i];
			if(i==s.size()-1)
				sum[i-1]+=arr[i];
		}
		else
		{
			sum[i+1]+=arr[i];
			sum[i-1]+=arr[i];
		}
	}
	lpi(i,0,s.size()-1,1)
	{
		if(sum[i]==10101)
		{
			cout<<"Yes\n";
			return 0;
		}
	}
	cout<<"No\n";
	return 0;
}