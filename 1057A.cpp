#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
vector<ll> adj[200010];
bool trav[200010];
ll arr[200010];
ll stack_ptr=0,n,flag=1;
void dfs(ll node)
{
	if(trav[node] || !flag)
		return;
	if(flag)
	{
		arr[stack_ptr++]=node;
		trav[node]=1;
	}
	if(node==n)
	{
		flag=0;
		return;
	}
	for(auto it:adj[node])
		if(!trav[it])
			dfs(it);
	if(flag)
	{
		stack_ptr--;
		trav[node]=0;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll a;
	cin>>n;
	trav[1]=0;
	lpi(i,2,n)
	{
		cin>>a;
		adj[i].pb(a);
		adj[a].pb(i);
	}
	dfs(1);
	lp(stack_ptr)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}