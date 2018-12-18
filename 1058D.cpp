#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
	ll n,m,k,x,y,f=1;
	cin>>n>>m>>k;
	if(k%2)
		f=0;
	if((2*m*n)%k!=0)
	{
		cout<<"NO\n";
		return 0;
	}
	if(f)
		k/=2;
	ll d=gcd(k,m);
	k/=d;
	y=m/d;
	d=gcd(k,n);
	k/=d;
	x=n/d;
	if(!f)
		if(x<n)x*=2;
		else y*=2;
	cout<<"YES\n0 0\n0 "<<y<<endl<<x<<" 0\n";
	return 0;
}