#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define push_back pb
ll adj[1010];
bool trav[1010];
ll ans[1010];
ll dfs(ll n)
{
	if(trav[n])
		return n;
	trav[n]=1;
	return dfs(adj[n]);
}
int main()
{
	ll n,i,a,j;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>adj[i];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			trav[j]=0;
		ans[i]=dfs(i);
	}
	for(i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}