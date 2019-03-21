#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
typedef long double ld;
typedef pair<ll,ll> pll;
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
	ll n;
	cin>>n;
	ll ans[n],q[n-1],sq=0,k=0;
	lp(n-1)
	{
		cin>>q[i];
		sq+=q[i];
		k+=sq;
	}
	if( ((n*(n+1))/2)-k<=0 || (((n*(n+1))/2)-k)%n!=0 )
	{
		cout<<"-1\n";
		return 0;

	}
	ans[0]=(((n*(n+1))/2)-k)/n;
	set<ll> ch;
	ch.insert(ans[0]);
	lp(n-1)
	{
		ans[i+1]=ans[i]+q[i];
		if(ans[i+1]>0 and ans[i+1]<=n)
			ch.insert(ans[i+1]);
		else
		{
			cout<<"-1\n";
			return 0;
		}
	}
	if(ch.size()!=n)
	{
		cout<<"-1\n";
		return 0;
	}
	lp(n)
		cout<<ans[i]<<" ";
	cout<<endl; 
	return 0;
}
