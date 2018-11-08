#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lp(i,n) for(i=0;i<n;i++)
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,a,b;
	cin>>n;
	ll pos[n],ht[n];
	lp(i,n)
		cin>>pos[i]>>ht[i];
	if(n==1)
	{
		cout<<"1\n";
		return 0;
	}
	if(n==2)
	{
		cout<<"2\n";
		return 0;
	}
	ll ans=2;
	lpi(i,1,n-2,1)
	{
		if(pos[i]-ht[i]>pos[i-1])
			ans++;
		else if(pos[i]+ht[i]<pos[i+1])
		{
			ans++;
			pos[i]+=ht[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}