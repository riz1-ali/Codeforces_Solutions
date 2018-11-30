#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x,y,d,ans=1e18+1;
		cin>>n>>x>>y>>d;
		bool f=0;
		if(abs(y-x)%d==0)
			f=1;
		if(f)
			ans=min(ans,abs(y-x)/d);
		// cout<<ans<<endl;
		ll dto1=x/d;
		if(x%d!=0)
			dto1++;
		f=0;
		if(abs(y-1)%d==0)
			f=1;
		if(f)
			ans=min(ans,abs(y-1)/d + dto1);
		// cout<<ans<<endl;
		ll dton=(n-x)/d;
		if((n-x)%d!=0)
			dton++;
		f=0;
		if(abs(n-y)%d==0)
			f=1;
		if(f)
			ans=min(ans,abs(n-y)/d + dton);
		// cout<<ans<<endl;
		if(ans!=1e18+1)
			cout<<ans<<endl;
		else
			cout<<"-1\n";
	}
	return 0;
}