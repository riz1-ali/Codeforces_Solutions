#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,ans=0,a,b;
	cin>>n>>m;
	if(n==m)
	{
		ans=(n+m)/3;
	}
	else
	{
		if(n<m)
		{
			a=n;
			b=m;
		}
		else
		{
			b=n;
			a=m;
		}
		while(a>=1 && b>=2)
		{
			if(a==b)
			{
				ans+=(a+b)/3;
				a=0;
				b=0;
				break;
			}
			else
			{
				a-=1;
				b-=2;
				ans++;
			}
		}
		while(a>=2 && b>=1)
		{
			if(a==b)
			{
				ans+=(a+b)/3;
				a=0;
				b=0;
				break;
			}
			else
			{
				a-=2;
				b-=1;
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}