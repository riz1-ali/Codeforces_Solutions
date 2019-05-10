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
	ll n,o=1;
	cin>>n;
	ll arr[n];
	lp(n)
	{
		cin>>arr[i];
		if(arr[i]!=1)
			o=0;
	}
	if(o)
	{
		cout<<"0\n";
		return 0;
	}
	ll ans=arr[0]/3;
	arr[0]%=3;
	ll carry=arr[0];
	for(ll i=1;i<n;i++)
	{
		ll temp=min(arr[i]/2,carry);
		ans+=temp;
		carry-=temp;
		arr[i]-=2*temp;
		ans+=arr[i]/3;
		arr[i]%=3;
		carry+=arr[i];
	}
	cout<<ans<<endl;
	return 0;
}
