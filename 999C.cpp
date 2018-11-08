#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define lp(i,n) for(i=0;i<n;i++)
vector<int> adj[26];
int main()
{
	ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int n,k,i,j,a;
	cin>>n>>k;
	string str;
	cin>>str;
	bool trav[str.size()];
	lp(i,n)
	{
		adj[str[i]-'a'].pb(i);
		trav[i]=true;
	}
	lp(i,26)
		sort(adj[i].begin(),adj[i].end());
	int ans=0;
	lp(i,26)
	{
		for(j=0;j<adj[i].size();j++)
		{
			if(trav[adj[i][j]])
			{
				trav[adj[i][j]]=false;
				ans++;
			}
			if(ans==k)
				goto l1;
		}
	}
	l1:
	bool flag=false;
	lp(i,n)
	{
		if(trav[i])
		{
			cout<<str[i];
			flag=1;
		}
	}
	if(flag)
		cout<<endl;
	return 0;
}