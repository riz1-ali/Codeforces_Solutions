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
	for(ll i=n-1;i>=0;i--)
		cin>>arr[i];
	ll x=0;
	for(ll i=0;i<n;i++)
		if(x<arr[i])
			if(!m)
			{
				cout<<i<<endl;
				return 0;
			}
			else
				m--,x=k-arr[i];
		else
			x-=arr[i];
	cout<<n<<endl;
	return 0;
}