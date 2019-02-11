#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
const ll mod=1000000007;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(int i=0;i<n;i++)
vector<ll> adj[200010];
bool trav[200010];
ll p=0;
void dfs(ll n,ll pp)
{
	cout<<n<<" ";
	trav[n]=1;
	p++;
	if(p==pp)
		return;
	if(!trav[adj[n][0]])
		dfs(adj[n][0],pp);
	else
		dfs(adj[n][1],pp);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a,b;
	cin>>n;
	lp(n)
	{
		cin>>a>>b;
		adj[i+1].pb(a);
		adj[i+1].pb(b);
	}
	lpi(i,1,n)
	{
		// cout<<adj[i][0]<<" "<<adj[i][1]<<endl;
		// cout<<adj[adj[i][0]][0]<<" "<<adj[adj[i][0]][1]<<endl;
		if(adj[adj[i][0]][0]!=adj[i][1] && adj[adj[i][0]][1]!=adj[i][1])
		{
			ll temp=adj[i][0];
			adj[i][0]=adj[i][1];
			adj[i][1]=temp;
		}
	}
	// lpi(i,1,n)
	// 	cout<<adj[i][0]<<" "<<adj[i][1]<<endl;
	dfs(1,n);
	cout<<endl;
	return 0;
}
