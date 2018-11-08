#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,ans=0,rem;
	cin>>n;
	while(n>0)
	{
		if(n>=100)
		{
			rem=n/100;
			n-=rem*100;
			ans+=rem;
			continue;
		}
		if(n>=20)
		{
			rem=n/20;
			n-=rem*20;
			ans+=rem;
			continue;
		}
		if(n>=10)
		{
			rem=n/10;
			n-=rem*10;
			ans+=rem;
			continue;
		}
		if(n>=5)
		{
			rem=n/5;
			n-=rem*5;
			ans+=rem;
			continue;
		}	
		if(n<5 && n>0)
		{			
			rem=n;
			n-=rem;
			ans+=rem;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
} 