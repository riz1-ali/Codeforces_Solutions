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
	set<ll> uniq;
	ll n,a;
	cin>>n;
	lp(n)
	{
		cin>>a;
		if(uniq.find(a)!=uniq.end())
			uniq.erase(a);
		else
			uniq.insert(a);
	}
	vector<ll> solve;
	for(auto it:uniq)
		solve.pb(it);
	ll ans=0;
	for(ll i=1;i<solve.size();i+=2)
		ans+=solve[i]-solve[i-1];
	cout<<ans<<endl;
	return 0;
}
