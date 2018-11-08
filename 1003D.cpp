#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
const ll d=1e9+7;
#define pb push_back
#define mp make_pair
#define sz(a) (ll)a.size()
#define inst(a) insert(a)
#define f first
#define s second
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lpr(i,start,end,val) for(i=start;i>=end;i-=val)
#define lp(i,n) for(i=0;i<n;i++)
map<ll,ll> m;
int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	ll n,q,a,i;
	cin>>n>>q;
	ll arr[n];
	lp(i,n)
	{
		cin>>arr[i];
		m[arr[i]]=0;
	}
	lp(i,n)
		m[arr[i]]++;
	vector<pll > p;
	for(map<ll,ll>::iterator it=m.begin();it!=m.end();it++)
		p.pb(mp(it->f,it->s));
	// lp(i,p.size())
	// 	cout<<p[i].f<<" "<<p[i].s<<endl;
	reverse(p.begin(),p.end());
	while(q--)
	{
		cin>>a;
		ll ans=0,t;
		lp(i,p.size())
		{
			if(p[i].f>a)
				continue;
			else
			{
				t=a/p[i].f;
				if(t>p[i].s)
				{
					ans+=p[i].s;
					a-=p[i].f*p[i].s;
				}
				else
				{
					ans+=t;
					a-=p[i].f*t;
				}
			}
		}
		if(a==0)
			cout<<ans<<endl;
		if(a>0)
			cout<<"-1\n";
	}
	return 0;
}