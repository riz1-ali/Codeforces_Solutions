#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define pll pair <ll,ll>
int main()
{
	ios_base::sync_with_stdio(false);
	ll n,i,ans=0,c0=0,c1=0,p=0,q=0;
	cin>>n;
	string a,b;
	cin>>a;
	cin>>b;
	for(i=0;i<n;i++)
	{
		if(a[i]=='0')c0++;
		else c1++;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]=='0')
		{
			if(a[i]=='1')
			{
				ans+=c0;
				p++;
			}
			else
			{
				ans+=c1;
				q++;
			}
		}
	}
	cout<<ans-p*q<<endl;
	return 0;
}