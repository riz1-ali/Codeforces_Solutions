#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
const ll d=1e9+7;
#define pb push_back
#define mp make_pair
#define sz(a) (ll)a.size()
#define inst(a) insert(a)
#define f first
#define s second
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lpr(i,start,end,val) for(i=start;i>=end;i-=val)
#define lp(i,n) for(i=0;i<n;i++)
set<ll> adj[200005];
ll subnode[200005];
bool trav[200005]; 
ll pos[200005];
map<ll,ll> ind;
ll c=0;
void dfs(ll n)
{
	trav[n]=true;
	pos[++c]=n;
	ind[n]=c;
	for(set<ll>::iterator it=adj[n].begin();it!=adj[n].end();it++)
		if(!trav[*it])
			dfs(*it);
	trav[n]=false;
}
ll dfs_subcount(ll n)
{
	trav[n]=true;
	for(set<ll>::iterator it=adj[n].begin();it!=adj[n].end();it++)
		if(!trav[*it])
			subnode[n]+=dfs_subcount(*it);
	return subnode[n]+1ll;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll i,n,q,a,u,k;
	cin>>n>>q;
	lpi(i,2,n,1)
	{
		cin>>a;
		adj[a].insert(i);
	}
	dfs(1);
	subnode[1]=dfs_subcount(1)-1;
	while(q--)
	{
		cin>>u>>k;
		if(k-1<=subnode[u])
			cout<<pos[ind[u]+k-1]<<endl;
		else
			cout<<"-1\n";
	}
	return 0;
}