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
	ll a[n];
	lp(n)
		cin>>a[i];
	vector<ll> arr;
	lp(2*n)
		arr.pb(a[i%n]);
	ll ans=-1,cur=0;
	lp(2*n)
	{
		if(arr[i]==1)
			cur++;
		else
		{
			ans=max(ans,cur);
			cur=0;
		}
	}
	if(cur>0)
		ans=max(ans,cur);
	cout<<ans<<endl;
	return 0;
}
