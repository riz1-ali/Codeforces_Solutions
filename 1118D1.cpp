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
map<int,int> cnt;
set<int> key;
struct comp{
	bool operator()(pair<int,int> a,pair<int,int> b)
	{
		if(a.s != b.s)
			return a.s > b.s;
		return a.f > b.f;
	}
};
multiset<pair<int,int>,comp> heaps;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll arr[n],sum=0;
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum<m)
	{
		cout<<"-1\n";
		return 0;
	}
	sort(arr,arr+n,greater<ll>());
	ll ans=n;
	for(int i=n;i>=1;i--)
	{
		vector<ll> temp[i];
		ll d=0;
		for(int j=0;j<n;j++)
		{
			temp[d].pb(arr[j]);
			d++;
			d%=i;
		}
		ll sums=0;
		for(int j=0;j<i;j++)
			for(int k=0;k<temp[j].size();k++)
				sums+=max(0ll,temp[j][k]-k);
		if(sums>=m)
			ans=i;
	}
	cout<<ans<<endl;
	return 0;
}
