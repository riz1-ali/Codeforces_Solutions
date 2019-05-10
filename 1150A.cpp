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
#define all(v) v.begin(),v.end()
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,r;
	cin>>n>>m>>r;
	ll arr[n],a,buy[m];
	lp(n)
		cin>>arr[i];
	lp(m)
		cin>>buy[i];
	ll maxp=r,curp,no_of_shares,loop;
	lp(n)
	{
		curp=0;
		for(ll j=0;j<m;j++)
			if(buy[j]>arr[i])
			{
				no_of_shares=r/arr[i];
				loop=r-(no_of_shares*arr[i]);
				curp=max(curp,loop+no_of_shares*buy[j]);
			}
		maxp=max(maxp,curp);
	}
	cout<<maxp<<endl;
	return 0;
}
