#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
set<int> adj[100010];
int main()
{
	int n,e,a,b;
	cin>>n>>e;
	int color[n];
	set<int> s;
	lp(n)
	{
		cin>>color[i];
		s.insert(color[i]);
	}
	lp(e)
	{
		cin>>a>>b;
		a--;
		b--;
		if(color[a]!=color[b])
		{
			adj[color[a]].insert(color[b]);
			adj[color[b]].insert(color[a]);
		}
	}
	int colors=0,maxi=-1;
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
		if((int)adj[*it].size()>maxi)
		{
			maxi=(int)adj[*it].size();
			colors=*it;
		}
		else if((int)adj[*it].size()==maxi && *it<colors)
			colors=*it;
	}
	cout<<colors<<endl;
	return 0;
}