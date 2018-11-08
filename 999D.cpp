#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll d=1e9+7;
#define pb push_back
#define mp make_pair
#define sz(a) (ll)a.size()
#define f first
#define s second
#define lpi(i,start,end,adj) for(i=start;i<=end;i+=adj)
#define lpr(i,start,end,adj) for(i=start;i>=end;i-=adj)
#define lp(i,n) for(i=0;i<n;i++)
vector<ll> adj[200010];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,i,fact;
	cin>>n>>m;
	fact=n/m;
	ll arr[n];
	lp(i,n)
	{
		cin>>arr[i];
		adj[arr[i]%m].pb(i);
	}
	vector <pair<ll,ll> > p;
	ll ans=0,val,pos,cur;
	lp(i,2*m) 
	{
		cur=i%m;
		while (ll(adj[cur].size())>fact)
		{
			val=adj[cur].back();
			adj[cur].pop_back();
			p.push_back(make_pair(val,i));
		}
		while (ll(adj[cur].size())<fact && !p.empty())
		{
			val=p.back().first;
			pos=p.back().second;
			p.pop_back();
			adj[cur].push_back(val);
			arr[val]+=i-pos;
			ans+=i-pos;
		}
	}
	cout<<ans<<endl;
	lp(i,n)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}