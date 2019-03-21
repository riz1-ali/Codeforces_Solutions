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
vector<ll> comp[110];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	lp(n)
		comp[arr[i]%k].pb(arr[i]);
	ll ans=2*((comp[0].size())/2);
	for(ll i=1;i<=k/2;i++)
		if(i!=k-i)
			ans+=2*(min(comp[i].size(),comp[k-i].size()));
		else
			ans+=2*(comp[i].size()/2);
	cout<<ans<<endl;
	return 0;
}
