#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
ll sumi(ll n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	ll n,p1,p2,ans=0,build=0,k,dig_c=0;
	cin>>n;
	if(n<=9)
	{
		cout<<n<<endl;
		return 0;
	}
	k=n;
	while(k>0)
	{
		k/=10;
		dig_c++;
	}
	k=n/2;
	while(k>0)
	{
		if(k/10==0)
		{
			build=k;
			break;
		}
		k/=10;
	}
	if(build>=5)
		dig_c--;
	for(int i=1;i<=dig_c-1;i++)
	{
		build*=10;
		build+=9;
	}
	cout<<sumi(build)+sumi(n-build)<<endl;
	return 0;
}