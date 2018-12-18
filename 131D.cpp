#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
vector<int> adj[3010];
bool trav[3010],flag=1;
int stacks[3010],ptr=0,dx;
set<int> delta;
int max_d[3010];
void cycle(int n,int p)
{
	if(trav[n])
	{
		if(flag)
			dx=n;
		flag=0;
		return;
	}
	trav[n]=1;
	if(flag)
		stacks[ptr++]=n;
	for(auto it:adj[n])
		if(it!=p)
			cycle(it,n);
	trav[n]=0;
	if(flag)
		ptr--;
}
void dfs(int n,int d,int t)
{
	if(trav[n])
		return;
	if(delta.find(n)==delta.end())
		max_d[n]=min(max_d[n],d);
	trav[n]=1;
	for(auto it:adj[n])
		if(delta.find(it)==delta.end())
			dfs(it,d+1,t);
	trav[n]=0;
}
int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int n,u,v;
	cin>>n;
	lp(n)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	cycle(1,-1);
	deque<int> dq;
	lp(ptr)
		dq.pb(stacks[i]);
	while(!dq.empty())
	{
		if(dq.front()==dx)
			break;
		dq.pop_front();
	}
	int xt=0;
	while(!dq.empty())
	{
		stacks[xt++]=dq.front();
		dq.pop_front();
	}
	ptr=xt;
	lpi(i,1,n)
		max_d[i]=1000000001,trav[i]=0;
	lp(ptr)
		delta.insert(stacks[i]),max_d[stacks[i]]=0;
	lp(ptr)
	{
		lpi(i,1,n)
			trav[i]=0;
		dfs(stacks[i],max_d[stacks[i]],i);
	}
	lpi(i,1,n)
	{
		if(delta.find(i)!=delta.end())
			cout<<"0 ";
		else
			cout<<max_d[i]<<" ";
	}
	cout<<endl;
	return 0;
}