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
	ll n,m,k;
	cin>>n>>m>>k;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<ll> v;
	for(int i=1;i<n;i++)
		v.pb(arr[i]-arr[i-1]-1);
	sort(v.begin(),v.end());
	ll ans=n,ptr=n,i=0;
	while(ptr>k)
	{
		ans+=v[i++];
		ptr--;
	}
	cout<<ans<<endl;
	return 0;
}
