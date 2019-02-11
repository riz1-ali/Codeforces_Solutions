#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=998244353;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,a,b;
		cin>>n;
		vector<pair<pll ,ll> > v;
		ll ans[n];
		bool f=1;
		lp(n)
		{
			cin>>a>>b;
			ans[i]=0;
			v.pb(mp(mp(a,b),i));
		}
		sort(v.begin(),v.end());
		ans[v[0].s]=1;
		ll s1=v[0].f.f,e1=v[0].f.s,s2=0,e2=0;
		bool flag=1;
		lpi(i,1,n-1)
		{
			if(v[i].f.f<=e1 && flag)
			{
				ans[v[i].s]=1;
				e1=max(e1,v[i].f.s);
			}
			else
			{
				ans[v[i].s]=2;
				flag=0;
			}
		}
		ll c1=0,c2=0;
		lp(n)
		{
			if(ans[i]==1)
				c1++;
			else
				c2++;
		}
		if(c1==0 || c2==0)
		{
			cout<<"-1\n";
			continue;
		}
		lp(n)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}
