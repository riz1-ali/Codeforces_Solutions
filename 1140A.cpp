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
	ll n,d=0;
	cin>>n;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	ll max_m=-1;
	lp(n)
	{
		max_m=max(max_m,arr[i]);
		if(max_m==i+1)
			d++;
	}
	cout<<d<<endl;
	return 0;
}
