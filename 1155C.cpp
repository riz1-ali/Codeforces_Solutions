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
	ll n,m;
	cin>>n>>m;
	ll arr[n],mini=1e18,p[m];
	lp(n)
	{
		cin>>arr[i];
		mini=min(mini,arr[i]);
	}
	lp(m)
		cin>>p[i];
	ll gcdx=gcd(arr[1]-mini,arr[0]-mini);
	for(ll i=1;i<n;i++)
		gcdx=gcd(gcdx,arr[i]-mini);
	lp(m)
		if(gcdx==p[i] or (gcd(gcdx,p[i])==p[i] and gcdx>=p[i]))
		{
			cout<<"YES\n"<<mini<<" "<<i+1<<endl;
			return 0;
		}
	cout<<"NO\n";
	return 0;
}
