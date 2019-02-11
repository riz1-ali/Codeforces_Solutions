#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(ll i=0;i<n;i++)
set<ll> adj[100010];
bool trav[100010];
vector<ll> ans;
priority_queue<ll,vector<ll>,greater<ll> > pq;
void bfs(ll n)
{
	trav[n]=1;
	pq.push(n);
	while(!pq.empty())
	{
		ll temp=pq.top();
		pq.pop();
		ans.pb(temp);
		for(auto it:adj[temp])
			if(!trav[it])
			{
				trav[it]=1;
				pq.push(it);
			}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,a,b;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		if(a!=b)
		{
			adj[a].insert(b);
			adj[b].insert(a);
		}
	}
	bfs(1);
	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
