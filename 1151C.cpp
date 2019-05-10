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
ll solve(ll l,ll r)
{
	if(l>r)
		return 0;
	ll o=0,e=0,k=r,pow=1;
	bool turn=1;
	while(k)
	{
		turn=!turn;
		if(turn)
		{
			ll val=min(pow,k);
			e+=val;
			k-=val;
		}
		else
		{
			ll val=min(pow,k);
			o+=val;
			k-=val;
		}
		pow*=2;
	}
	ll sum=0;
	o%=mod,e%=mod;
	if(o!=0)
		sum=(sum+(o*o)%mod)%mod;
	if(e!=0)
		sum=(sum+(e*(e+1))%mod)%mod;
	return sum%mod;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll l,r;
	cin>>l>>r;
	cout<<(mod*(mod-7)+solve(1,r)-solve(1,l-1))%mod<<endl;
	return 0;
}
