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
	ll n,m;
	cin>>n>>m;
	ll ini[n][m],tar[n][m];
	lp(n)
		for(ll j=0;j<m;j++)
			cin>>ini[i][j];
	lp(n)
		for(ll j=0;j<m;j++)
			cin>>tar[i][j];
	vector<pll> beg_s;
	for(ll i=0;i<m;i++)
		beg_s.pb(mp(0,i));
	for(ll i=1;i<n;i++)
		beg_s.pb(mp(i,m-1));
	for(ll i=0;i<=n+m-2;i++)
	{
		ll sx=beg_s[i].f,sy=beg_s[i].s;
		vector<ll> in,fi;
		// cout<<"--------\n";
		for(ll j=sx,k=sy;j<n,k>=0;j++,k--)
		{
			if(j>=n || k>=m)
				break;
			// cout<<j<<" - "<<k<<endl;
			in.pb(ini[j][k]);
			fi.pb(tar[j][k]);
		}
		// cout<<"--------\n";
		sort(in.begin(),in.end());
		sort(fi.begin(),fi.end());
		for(int j=0;j<fi.size();j++)
		{
			if(in[j]!=fi[j])
			{
				cout<<"NO\n";
				return 0;
			}
		}
	}
	cout<<"YES\n";
	return 0;
}
