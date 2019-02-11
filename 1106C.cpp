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
	ll n;
	cin>>n;
	ll arr[n],ans=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n/2;i++)
		ans+=(arr[i]+arr[n-1-i])*(arr[i]+arr[n-1-i]);
	cout<<ans<<endl;
	return 0;
}
