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
bool comp(pll a,pll b)
{
	if(a.s!=b.s)
		return a.s<b.s;
	return a.f<b.f;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	map<ll,vector<pll> > poss;
	set<ll> key;
	for(ll i=0;i<n;i++)
	{
		ll sum=0;
		for(ll j=i;j<n;j++)
		{
			sum+=arr[j];
			key.insert(sum);
			poss[sum].pb(mp(i,j));	
		}
	}
	for(auto it:key)
		sort(poss[it].begin(),poss[it].end(),comp);
	vector<pll> ans;
	ll res=-1;
	for(auto it:key)
	{
		vector<pll> temp;
		for(auto it1:poss[it])
		{
			if(temp.size()==0)
			{
				temp.pb(it1);
				continue;
			}
			if(temp[temp.size()-1].s<it1.f)
				temp.pb(it1);
		}
		if(temp.size()>ans.size())
			ans=temp;
	}
	cout<<ans.size()<<endl;
	for(auto it:ans)
		cout<<it.f+1<<" "<<it.s+1<<endl;
	return 0;
}