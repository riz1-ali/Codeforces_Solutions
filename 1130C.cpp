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
string mat[52];
ll n;
vector<pll> Z1,Z2;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	ll r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	lp(n)
		cin>>mat[i];
	bool trav[n+2][n+2],in_m[n+2][n+2];
	for(ll i=0;i<=n;i++)
		for(ll j=0;j<=n;j++)
			trav[i][j]=in_m[i][j]=0;
	deque<pll> ele;
	ele.pb(mp(r1,c1));
	while(!ele.empty())
	{
		pll top = ele.front();
		ele.pop_front();
		trav[top.f][top.s]=1;
		Z1.pb(top);
		if(top.f-1>=1 and mat[top.f-1-1][top.s-1]=='0' and !trav[top.f-1][top.s] and !in_m[top.f-1][top.s])
		{
			in_m[top.f-1][top.s]=1;
			ele.pb(mp(top.f-1,top.s));
		}
		if(top.s-1>=1 and mat[top.f-1][top.s-1-1]=='0' and !trav[top.f][top.s-1] and !in_m[top.f][top.s-1])
		{
			in_m[top.f][top.s-1]=1;
			ele.pb(mp(top.f,top.s-1));
		}
		if(top.f+1<=n and mat[top.f+1-1][top.s-1]=='0' and !trav[top.f+1][top.s] and !in_m[top.f+1][top.s])
		{
			in_m[top.f+1][top.s]=1;
			ele.pb(mp(top.f+1,top.s));
		}
		if(top.s+1<=n and mat[top.f-1][top.s+1-1]=='0' and !trav[top.f][top.s+1] and !in_m[top.f][top.s+1])
		{
			in_m[top.f][top.s+1]=1;
			ele.pb(mp(top.f,top.s+1));
		}
	}
	for(ll i=0;i<=n;i++)
		for(ll j=0;j<=n;j++)
			trav[i][j]=in_m[i][j]=0;
	ele.pb(mp(r2,c2));
	while(!ele.empty())
	{
		pll top = ele.front();
		ele.pop_front();
		trav[top.f][top.s]=1;
		Z2.pb(top);
		if(top.f-1>=1 and mat[top.f-1-1][top.s-1]=='0' and !trav[top.f-1][top.s] and !in_m[top.f-1][top.s])
		{
			in_m[top.f-1][top.s]=1;
			ele.pb(mp(top.f-1,top.s));
		}
		if(top.s-1>=1 and mat[top.f-1][top.s-1-1]=='0' and !trav[top.f][top.s-1] and !in_m[top.f][top.s-1])
		{
			in_m[top.f][top.s-1]=1;
			ele.pb(mp(top.f,top.s-1));
		}
		if(top.f+1<=n and mat[top.f+1-1][top.s-1]=='0' and !trav[top.f+1][top.s] and !in_m[top.f+1][top.s])
		{
			in_m[top.f+1][top.s]=1;
			ele.pb(mp(top.f+1,top.s));
		}
		if(top.s+1<=n and mat[top.f-1][top.s+1-1]=='0' and !trav[top.f][top.s+1] and !in_m[top.f][top.s+1])
		{
			in_m[top.f][top.s+1]=1;
			ele.pb(mp(top.f,top.s+1));
		}
	}
	ll cost=1e18;
	for(auto it:Z1)
		for(auto it1:Z2)
			if(mat[it.f-1][it.s-1]==mat[it1.f-1][it1.s-1] and mat[it.f-1][it.s-1]=='0')
					cost=min(cost,(it.f-it1.f)*(it.f-it1.f)+(it.s-it1.s)*(it.s-it1.s));
	cout<<cost<<endl;
	return 0;
}
