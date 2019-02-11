#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	int y,b,r,ans=0;
	cin>>y>>b>>r;
	for(int i=y;i>=1;i--)
	{
		for(int j=b;j>=2;j--)
		{
			for(int k=r;k>=3;k--)
			{
				if(i+1==j && j+1==k)
					ans=max(ans,i+j+k);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
