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
	ll n,m,ans=0,a,o1=0,e1=0;
	cin>>n>>m;
	lp(n)
	{
		cin>>a;
		if(a%2)
			o1++;
		else
			e1++;
	}
	lp(m)
	{
		cin>>a;
		if(a%2 and e1>0)
		{
			e1--;
			ans++;
		}
		else if(!(a%2) and o1>0)
		{
			o1--;
			ans++;
		}
	}
	cout<<min(ans,n)<<endl;
	return 0;
}
