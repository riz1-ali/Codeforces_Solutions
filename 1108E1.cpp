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
	ll n,m,a,b;
	cin>>n>>m;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<pll> v;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		v.pb(mp(a-1,b-1));
	}
	ll maxi=-1e9,mini=1e9;
	for(int i=0;i<n;i++)
		maxi=max(maxi,arr[i]),mini=min(mini,arr[i]);
	vector<ll> ans;
	for(int i=0;i<n;i++)
	{
		ll temp_arr[n];
		vector<ll> temp_ans;
		for(int j=0;j<n;j++)
			temp_arr[j]=0;
		for(int j=0;j<m;j++)
			if(i<v[j].f or i>v[j].s)
			{
				temp_ans.pb(j);
				for(int k=v[j].f;k<=v[j].s;k++)
					temp_arr[k]--;
			}
		ll tmaxi=-1e9,tmini=1e9;
		for(int j=0;j<n;j++)
			tmaxi=max(tmaxi,arr[j]+temp_arr[j]),tmini=min(tmini,arr[j]+temp_arr[j]);
		if(maxi-mini<tmaxi-tmini)
		{
			ans=temp_ans;
			maxi=tmaxi;
			mini=tmini;
		}
	}
	cout<<maxi-mini<<endl<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]+1<<" ";
	cout<<endl;
	return 0;
}
