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
#define lp(i,n) for(ll i=0;i<n;i++)
vector<ll> adj[100010];
bool trav[100010];
multiset<ll> ms;
ll dfs(ll n,ll d)
{
	if(n!=1 && adj[n].size()==1)
	{
		ms.insert(1);
		return 1;
	}
	ll cntr=0;
	for(auto it:adj[n])
		if(it!=d)
			cntr+=dfs(it,n);
	if(!cntr)
		cntr++;
	ms.insert(cntr);
	return cntr;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,v;
	cin>>n;
	trav[1]=0;
	lpi(i,2,n)
	{
		cin>>v;
		trav[i]=0;
		adj[i].pb(v);
		adj[v].pb(i);
	}
	dfs(1,0);
	for(auto it:ms)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}