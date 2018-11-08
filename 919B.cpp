#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int check(ll x)
{
	ll s=0;
	while(x>0)
	{
		s+=x%10;
		x/=10;
	}
	if(s==10)
		return 1;
	else
		return 0;
}
int main()
{
	ll k,i,x=0;
	cin>>k;
	for(i=0;i<=k;)
	{
		if(check(x)==1)
			i++;
		if(i==k)
		{
			cout<<x<<endl;
			return 0;
		}
		x++;
	}
	return 0;
}