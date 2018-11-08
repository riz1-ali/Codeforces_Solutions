#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int c,x,i,k,p,sum=0;
	cin>>k>>p;
	for(i=1;i<=k;i++)
	{
		c=i;
		x=i;
		while(c>0)
		{
			x=x*10+c%10;
			c/=10;
		}
		sum=(sum%p+(x%p))%p;
	}
	cout<<sum<<endl;
	return 0;
}