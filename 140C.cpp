#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
map<ll,ll> m;
struct comp_set{
	bool operator()(ll a,ll b)
	{
		if(m[a]!=m[b])
			return m[a] > m[b];
		return a > b;
	}
};
int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	lp(n)
	{
		cin>>arr[i];
		m[arr[i]]=0;
	}
	lp(n)
		m[arr[i]]++;
	set<ll,comp_set> key;
	lp(n)
		key.insert(arr[i]);
	vector<pair<ll,pll> > v;
	while(1)
	{
		if(key.size()<3)
			break;
		ll arr[3],t=100000000000;
		lp(3)
		{
			auto it=key.begin();
			arr[i]=*it;
			key.erase(it);
		}
		sort(arr,arr+3,greater<ll>());
		lp(3)
		{
			m[arr[i]]--;
			if(m[arr[i]]>0)
				key.insert(arr[i]);
		}
		v.pb(mp(arr[0],mp(arr[1],arr[2])));
	}
	cout<<v.size()<<endl;
	for(auto it:v)
		cout<<it.f<<" "<<it.s.f<<" "<<it.s.s<<endl;
	return 0;
}