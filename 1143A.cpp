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
	ll arr[n],l=0,r=0;
	lp(n)
	{
		cin>>arr[i];
		if(arr[i])
			r++;
		else
			l++;
	}
	lp(n)
	{
		if(arr[i])
			r--;
		else
			l--;
		if(r==0 or l==0)
		{
			cout<<i+1<<endl;
			return 0;
		}
	}
	return 0;
}
