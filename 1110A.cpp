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
ll powers(ll a,ll b,ll mod)
{
	ll ans=1;
	while(b)
	{
		if(b%2)
			ans=(ans*a)%mod;
		b/=2;
		a=(a*a)%mod;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll b,k,ans=0;
	cin>>b>>k;
	ll arr[k];
	for(int i=0;i<k;i++)
		cin>>arr[i];
	reverse(arr,arr+k);
	for(int i=0;i<k;i++)
		ans=(ans+powers(b,i,2)*arr[i])%2;
	if(ans)
		cout<<"odd\n";
	else
		cout<<"even\n";
	return 0;
}
