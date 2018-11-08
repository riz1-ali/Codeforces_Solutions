#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
vector< pair<ll,ll> > adj[100010];
bool trav[100010];
set< pair<ll,ll> > s;
ll dis[100010],cross[100010],ans[100010];
void dijkstra(ll n,ll d)
{
	for(ll i=0;i<adj[n].size();i++)
	{	
		if(d+adj[n][i].second<dis[adj[n][i].first])
		{
			dis[adj[n][i].first]=d+adj[n][i].second;
			cross[adj[n][i].first]=n;
			s.insert(mp(d+adj[n][i].second,adj[n][i].first));
		}
	}
}
int main()
{
	ll i,c,start,end,weight,v,e;
	cin>>v>>e;
	for(i=0;i<v;i++)
	{
		dis[i]=1e12;
		trav[i]=false;
	}
	for(i=0;i<e;i++)
	{
		cin>>start>>end>>weight;
		start--;
		end--;
		adj[start].pb(mp(end,weight));
		adj[end].pb(mp(start,weight));
	}
	pair <ll,ll> a=mp(0,0);
	s.insert(a);
	set< pair<ll,ll> >::iterator it;
	while(!s.empty())
	{
		it=s.begin();
		pair<ll,ll> temp=*it;
		if(!trav[temp.second])
		{
			dijkstra(temp.second,temp.first);
			trav[temp.second]=true;
		}
		s.erase(it);
	}
	if(dis[v-1]==1e12)
	{
		cout<<"-1\n";
		return 0;
	}
	i=v-1;
	c=0;
	while(i!=0)
	{
		ans[c++]=i+1;
		i=cross[i];
//		c++;
	}
	ans[c++]=i+1;
	for(i=c-1;i>=0;i--)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}