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
ll solve(ll n,ll a,ll b)
{
	ll limit=n/b;
	lpi(i,0,limit)
	{
		if((n-i*b)%a==0)
			return i;
	}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a,b,c,d,x;
	cin>>n>>a>>b;
	x=n;
	ll arr[x+1];
	c=min(a,b),d=max(a,b);
	if(x%c==0)
		a=d,b=c;
	else
		a=c,b=d;
	ll big,small,start=1;
	big=solve(n,a,b);
	small=(n-b*big)/a;
	if(b*big+a*small!=n)
	{
		cout<<"-1\n";
		return 0;
	}
	while(big)
	{
		deque<ll> dq;
		lpi(i,start,start+b-1)
			dq.pb(i);
		ll f=dq.front();
		dq.pop_front();
		dq.pb(f);
		lpi(i,start,start+b-1)
			arr[i]=dq.front(),dq.pop_front();
		start+=b;
		big--;
	}
	while(small)
	{
		deque<ll> dq;
		lpi(i,start,start+a-1)
			dq.pb(i);
		ll f=dq.front();
		dq.pop_front();
		dq.pb(f);
		lpi(i,start,start+a-1)
			arr[i]=dq.front(),dq.pop_front();
		start+=a;
		small--;
	}
	lpi(i,1,x)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}