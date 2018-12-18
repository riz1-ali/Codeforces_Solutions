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
bool comp(pll a,pll b)
{
	if(a.f!=b.f)
		return a.f<b.f;
	return a.s>b.s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll q,a,b,k;
	cin>>q;
	while(q--)
	{
		cin>>a>>b>>k;
		if(k%2)
			cout<<(-1*b*(k/2))+(k-(k/2))*a<<endl;
		else
			cout<<(a-b)*(k/2)<<endl;
	}
	return 0;
}