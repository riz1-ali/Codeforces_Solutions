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
	ll arr[4];
	lp(4)
		cin>>arr[i];
	if(arr[0]!=arr[3] || arr[0]+arr[3]<2*min(arr[2],1ll))
	{
		cout<<"0\n";
		return 0;
	}
	cout<<"1\n";
	return 0;
}
