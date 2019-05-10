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
deque<ll> mods[200010];
set<ll> access;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,b;
	cin>>n;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	lp(n)
	{
		cin>>b;
		mods[b%n].pb(b);
		access.insert(b%n);
	}
	lp(n)
	{
		ll cur=arr[i];
		ll tar=(n-arr[i]%n)%n;
		if(access.find(tar)!=access.end())
		{
			ll t=mods[tar].front();
			mods[tar].pop_front();
			cout<<(cur+t)%n<<" ";
			if(mods[tar].size()==0)
				access.erase(tar);
		}
		else
		{
			auto it=access.lower_bound({tar});
			if(access.lower_bound({tar})==access.end())
				tar=*access.begin();
			else
				tar=*it;
			ll t=mods[tar].front();
			mods[tar].pop_front();
			cout<<(cur+t)%n<<" ";
			if(mods[tar].size()==0)
				access.erase(tar);
		}
	}
	cout<<endl;
	return 0;
}
