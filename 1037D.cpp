#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
vector<ll> adj[200010];
bool trav[200010];
map<ll,ll> order;
queue<ll> q;
bool comp(ll a,ll b)
{
	return order[a]<order[b];
}
int main()
{
	ll i,n,a,b;
	cin>>n;
	for(i=1;i<n;i++)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	ll inorder[n];
	for(i=0;i<n;i++)
	{
		cin>>inorder[i];
		trav[i+1]=0;
		order[inorder[i]]=i;
	}
	for(i=1;i<=n;i++)
		sort(adj[i].begin(),adj[i].end(),comp);
	q.push(1);
	vector<ll> ans_order;
	ans_order.pb(1);
	while(!q.empty())
	{
		ll top=q.front();
		q.pop();
		trav[top]=1;
		for(i=0;i<adj[top].size();i++)
		{
			if(!trav[adj[top][i]])
			{
				ans_order.pb(adj[top][i]);
				q.push(adj[top][i]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(inorder[i]!=ans_order[i])
		{
			cout<<"No\n";
			return 0;
		}
	}
	cout<<"Yes\n";
	return 0;
}