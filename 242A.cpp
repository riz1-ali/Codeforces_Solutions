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
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	set<pll> s;
	ll x,y,a,b;
	cin>>x>>y>>a>>b;
	lpi(i,a,x)
		lpi(j,b,y)
			if(i>j)
				s.insert(mp(i,j));
	cout<<s.size()<<endl;
	for(auto it:s)
		cout<<it.f<<" "<<it.s<<endl;
	return 0;
}