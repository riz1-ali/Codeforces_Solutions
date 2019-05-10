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
ll giv[510][510],tar[510][510];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll rowxg[n],colxg[m],rowxt[n],colxt[m];
	for(ll i=0;i<n;i++)
	{
		rowxg[i]=rowxt[i]=0;
		for(ll j=0;j<m;j++)
		{
			colxt[j]=colxg[j]=0;
			cin>>giv[i][j];
		}
	}
	for(ll i=0;i<n;i++)
		for(ll j=0;j<m;j++)
			cin>>tar[i][j];
	for(ll i=0;i<n;i++)
		for(ll j=0;j<m;j++)
		{
			rowxg[i]^=giv[i][j];
			rowxt[i]^=tar[i][j];
		}
	for(ll j=0;j<m;j++)
		for(ll i=0;i<n;i++)
		{
			colxg[j]^=giv[i][j];
			colxt[j]^=tar[i][j];

		}
	for(ll i=0;i<n;i++)
		if(rowxt[i]!=rowxg[i])
		{
			cout<<"No\n";
			return 0;
		}
	for(ll i=0;i<m;i++)
		if(colxt[i]!=colxg[i])
		{
			cout<<"No\n";
			return 0;
		}
	cout<<"Yes\n";
	return 0;
}
