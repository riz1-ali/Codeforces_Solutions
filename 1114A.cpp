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
	int x,y,z,a,b,c,tg;
	cin>>x>>y>>z>>a>>b>>c;
	tg=a+b+c;
	if(a<x)
	{
		cout<<"NO\n";
		return 0;
	}
	a-=x;
	tg-=x;
	if(a+b<y)
	{
		cout<<"NO\n";
		return 0;
	}
	tg-=y;
	if(tg<z)
	{
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	return 0;
}
