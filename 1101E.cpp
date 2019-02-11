#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=998244353;
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
	ll q,x=0,y=0,h,w,tx,ty;
	cin>>q;
	char c;
	while(q--)
	{
		cin>>c;
		if(c=='+')
		{
			cin>>tx>>ty;
			ll a,b;
			a=min(tx,ty);
			b=max(tx,ty);
			if(x<a)
				x=a;
			if(y<b)
				y=b;
		}
		else
		{
			cin>>h>>w;
			ll a,b;
			a=min(h,w);
			b=max(h,w);
			if((x<=h && y<=w) || (y<=h && x<=w))
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;
}
