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
	ll n,ans=0,act;
	cin>>n;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	act=arr[n-1];
	for(ll i=n-1;i>=0;i--)
	{
		if(act==0)
			break;
		ans+=min(act,arr[i]);
		act=min(act-1,arr[i]-1);
	}
	cout<<ans<<endl;
	return 0;
}
