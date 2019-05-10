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
	vector<ll> a,b;
	map<ll,ll> ac,bc;
	set<ll> akey,bkey;
	ll n,m,k;
	cin>>n>>m;
	lp(n)
	{
		cin>>k;
		a.pb(k);
		ac[k]=0;
		akey.insert(k);
	}
	lp(m)
	{
		cin>>k;
		b.pb(k);
		bc[k]=0;
		bkey.insert(k);
	}
	sort(all(a));
	sort(all(b),greater<ll>());
	ll ans=0,cur=0;
	while(cur<min(n,m) and a[cur]<b[cur])
	{
		ans+=abs(a[cur]-b[cur]);
		cur++;
	}
	cout<<ans<<endl;
	return 0;
}
