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
	ll n,s,sum=0;
	cin>>n>>s;
	ll arr[n];
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum<s)
	{
		cout<<"-1\n";
		return 0;
	}
	sort(arr,arr+n);
	sum=0;
	lpi(i,1,n-1)
		sum+=arr[i]-arr[0];
	if(sum>=s)
	{
		cout<<arr[0]<<endl;
		return 0;
	}
	ll ptr=0;
	while(sum<s)
	{
		sum+=n;
		arr[0]-=1;
	}
	ll ans=1000000000000;
	lp(n)
		ans=min(ans,arr[i]);
	cout<<ans<<endl;
	return 0;
}
