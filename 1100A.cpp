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
	ll n,k;
	cin>>n>>k;
	ll arr[n],e=0,s=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
			e++;
		else
			s++;
	}
	ll ans=0;
	for(int i=0;i<k;i++)
	{
		ll te=e,ts=s;
		for(int j=i;j<n;j+=k)
		{
			if(arr[j]==1)
				te--;
			else
				ts--;
		}
		ans=max(ans,abs(te-ts));
	}
	cout<<ans<<endl;
	return 0;
}
