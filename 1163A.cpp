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
#define all(v) v.begin(),v.end()
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	if(m==n)
	{
		cout<<"0\n";
		return 0;
	}
	if(m==0 or m==n-1 or m==1)
	{
		cout<<"1\n";
		return 0;
	}
	if(n%2==0)
	{
		if(m>n/2)
			m=n-m;
		cout<<m<<endl;
		return 0;
	}
	else
	{
		if(m>n/2)
			m=n-m;
		cout<<m<<endl;
	}
	return 0;
}
