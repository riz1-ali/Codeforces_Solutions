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
	ll n,k;
	cin>>n>>k;
	if(k*(k-1)<n)
	{
		cout<<"NO\n";
		return 0;
	}
	vector<pll> ans;
	for(ll i=k;i>=1;i--)
	{
		for(ll j=i-1;j>=1;j--)
		{
			if(i==j || ans.size()>=n)
				break;
			ans.pb(mp(i,j));
			ans.pb(mp(j,i));
		}
		if(ans.size()>=n)
			break;
	}
	cout<<"YES\n";
	ll c=0;
	for(auto it:ans)
	{
		c++;
		cout<<it.f<<" "<<it.s<<endl;
		if(c==n)
			break;
	}
	return 0;
}
