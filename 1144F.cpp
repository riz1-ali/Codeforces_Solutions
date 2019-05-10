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
#define all(v) v.begin(),v.end()
vector<pll> edge;
set<pll> dirs;
vector<ll> adj[200010];
bool trav[200010],dir_type[200010];
void bfs(ll N,bool direct)
{
	deque<ll> dq;
	dq.pb(N);
	dir_type[N]=direct;
	ll n;
	bool dir;
	while(!dq.empty())
	{
		n=dq.front();
		dq.pop_front();
		if(trav[n])
			continue;
		trav[n]=1;
		dir=dir_type[n];
		for(auto it:adj[n])
			if(!trav[it])
			{
				dq.pb(it);
				dir_type[it]=!dir;
			}
	}
}
void check_bfs(ll N)
{
	deque<ll> dq;
	dq.pb(N);
	ll n;
	while(!dq.empty())
	{
		n=dq.front();
		dq.pop_front();
		if(trav[n])
			continue;
		trav[n]=1;
		for(auto it:adj[n])
		{
			if(dir_type[it]==dir_type[n])
			{
				cout<<"NO\n";
				exit(0);
			}
			if(!trav[it])
			{
				if(!dir_type[n])
					dirs.insert(mp(n,it));
				else
					dirs.insert(mp(it,n));
				dq.pb(it);
			}
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
	lp(m)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
		edge.pb(mp(a,b));
	}
	bfs(1,0);
	for(ll i=1;i<=n;i++)
		trav[i]=0;
	check_bfs(1);
	cout<<"YES\n";
	for(auto it:edge)
		if(dirs.find(it)!=dirs.end())
			cout<<"1";
		else
			cout<<"0";
	cout<<endl;
	return 0;
}
