#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(i,n) for(i=0;i<n;i++)
vector<ll> adj[5005];
bool trav[5005];
bool accessible[5005];
int c;
vector<pair<int,int> >p;
void dfs_im(ll n)
{
	trav[n]=true;
	for(ll i=0;i<adj[n].size();i++)
		if(!trav[adj[n][i]])
			dfs_im(adj[n][i]);
}
void dfs_c(ll n)
{
	accessible[n]=true;
	c++;
	for(int i=0;i<adj[n].size();i++)
		if(!trav[adj[n][i]] && !accessible[adj[n][i]])
			dfs_c(adj[n][i]);
}
int main()
{
	ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	ll m,n,i,j,ind,st,e;
	cin>>n>>m>>ind;	
	lp(i,m)
	{
		cin>>st>>e;
		adj[st].pb(e);
	}
	dfs_im(ind);
	for(i=1;i<=n;i++)
	{
		if(!trav[i])
		{
			c=0;
			lp(j,n+1)
				accessible[j]=false;
			dfs_c(i);
			p.pb(mp(c,i));
		}
	}
	sort(p.begin(),p.end());
	reverse(p.begin(),p.end());
	int ans=0;
	// lp(i,p.size())
	// 	cout<<p[i].f<<" "<<p[i].s<<endl;
	lp(i,p.size())
	{
		if(!trav[p[i].s])
		{
			ans++;	
			dfs_im(p[i].s);
		}
	}
	cout<<ans<<endl;
	return 0;
}