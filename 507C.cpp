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
ll powers(ll a,ll b)
{
	ll ans=1;
	while(b)
	{
		if(b%2)
			ans*=a;
		a*=a;
		b/=2;
	}
	return ans;
}
ll ans=0;
void solve(ll l,ll r,bool dir,ll n)
{
	if(n<l or n>r)
	{
		ans+=2*(r-l+1)-1;
		return;
	}
	if(n==l and l==r)
		return;
	ans++;
	ll mid=(l+r)/2;
	if(!dir)
		if(n>=l and n<=mid)
			solve(l,mid,!dir,n);
		else
		{
			ans+=2*(mid-l+1)-1;
			solve(mid+1,r,dir,n);
			
		}
	else
		if(n>=mid+1 and n<=r)
			solve(mid+1,r,!dir,n);
		else
		{
			ans+=2*(r-mid)-1;
			solve(l,mid,dir,n);
		}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,h;
	cin>>h>>n;
	solve(1,powers(2,h),0,n);
	cout<<ans<<endl;
	return 0;
}
