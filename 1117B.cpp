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
	ll n,m,k,ans=0;
	cin>>n>>m>>k;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n,greater<ll>());
	ll sums=k*arr[0]+arr[1];
	ll val = m/(k+1);
	m%=(k+1);
	ans+=sums*val;
	if(m)
		ans+=arr[0]*m;
	cout<<ans<<endl;
	return 0;
}
