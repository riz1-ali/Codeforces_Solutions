#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
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
ll dp[11][110][110];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,q,c,a,b,x,ans=0;
	cin>>n>>q>>c;
	lp(n)
	{
		cin>>a>>b>>x;
		dp[x][a][b]++;
	}
	for(ll i=0;i<11;i++)
		for(ll j=1;j<=100;j++)
			for(ll k=1;k<=100;k++)
				dp[i][j][k]+=dp[i][j-1][k]+dp[i][j][k-1]-dp[i][j-1][k-1];
	ll t,x1,x2,y1,y2,p,qs;
	while(q--)
	{
		cin>>t>>x1>>y1>>x2>>y2;
		ans=0;
		for(ll i=0;i<=c;i++)
		{
			p=(i+t)%(c+1);
			qs=dp[i][x2][y2]-dp[i][x1-1][y2]-dp[i][x2][y1-1]+dp[i][x1-1][y1-1];
			ans+=p*qs;
		}
		cout<<ans<<endl;
	}
	return 0;
}
