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
	ll n;
	cin>>n;
	ll ans=10000000000000;
	for(ll i=1;i*i<=n;i++)
	{
		if(n%i==0)
			ans=min(ans,i+(n/i));
	}
	ll k=sqrt(n);
	ll t2=2*k;
	n-=k*k;
	while(n>0)
	{
		t2+=1;
		n-=k;
		k++;
	}
	cout<<min(ans,t2)<<endl;
	return 0;
}
