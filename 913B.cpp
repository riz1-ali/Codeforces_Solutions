#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define sz(a) (int)a.size()
#define lp(i,n) for(i=0;i<n;i++)
vector<int> adj[3010];
set<int> s;
bool trav[3010]={false};
void dfs(int n)
{
	if(trav[n])
		return;
	int i,c=0;
	for(int i=0;i<sz(adj[n]);i++)
	{
		if(!trav[adj[n][i]])
		{
			if(sz(adj[adj[n][i]])!=0)
				dfs(adj[n][i]);
			else
			{
				s.erase(adj[n][i]);
				c++;
			}
		}
	}
	if(c>=3)
		s.erase(n);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,a;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		cin>>a;
		adj[a].pb(i);
	}
	for(i=1;i<=n;i++)
		s.insert(i);
	dfs(1);
	lp(i,n+1)
		trav[i]=0;
	if(!sz(s))
	{
		cout<<"Yes\n";
		return 0;
	}
	cout<<"No\n";
	return 0;
} 