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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll mat1[n][m],mat2[n][m],mat3[n][m],mat4[n][m];
	lp(n)
		for(ll j=0;j<m;j++)
			cin>>mat1[i][j];
	lp(n)
		for(ll j=0;j<m;j++)
			cin>>mat2[i][j];
	lp(n)
		for(ll j=0;j<m;j++)
		{
			mat3[i][j]=min(mat1[i][j],mat2[i][j]);
			mat4[i][j]=max(mat1[i][j],mat2[i][j]);
		}
	lp(n)
	{
		ll c1,c2;
		for(ll j=0;j<m;j++)
		{
			if(!j)
			{
				c1=mat3[i][j];
				c2=mat4[i][j];
				continue;
			}
			if(mat3[i][j]<=c1 or mat4[i][j]<=c2)
			{
				cout<<"Impossible\n";
				return 0;
			}
			c1=mat3[i][j];
			c2=mat4[i][j];
		}
	}
	for(ll j=0;j<m;j++)
	{
		ll c1,c2;
		lp(n)
		{
			if(!i)
			{
				c1=mat3[i][j];
				c2=mat4[i][j];
				continue;
			}
			if(mat3[i][j]<=c1 or mat4[i][j]<=c2)
			{
				cout<<"Impossible\n";
				return 0;
			}
			c1=mat3[i][j];
			c2=mat4[i][j];
		}
	}
	cout<<"Possible\n";
	return 0;
}
