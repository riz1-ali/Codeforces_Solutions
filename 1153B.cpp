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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,h;
	cin>>n>>m>>h;
	ll row[m],col[n],mat[n][m],ans[n][m];
	lp(m)
		cin>>row[i];
	lp(n)
		cin>>col[i];
	lp(n)
		for(ll j=0;j<m;j++)
		{
			cin>>mat[i][j];
			ans[i][j]=0;
		}
	lp(n)
		for(ll j=0;j<m;j++)
			if(mat[i][j])
				ans[i][j]=min(row[j],col[i]);
	lp(n)
	{
		for(ll j=0;j<m;j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
