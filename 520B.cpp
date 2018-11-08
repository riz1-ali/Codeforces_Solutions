#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define loop_inc(i,start,end,increment) for(ll i=start;i<=end;i+=increment)
int main()
{
	ll n,m,c=0;
	cin>>n>>m;
	if(n>=m)
	{
		cout<<n-m<<endl;
		return 0;
	}
	while(m>n)
	{
		if(m%2==0)
			m/=2;
		else
			m++;
		c++;
	}
	cout<<n-m+c<<endl;
	return 0;
}