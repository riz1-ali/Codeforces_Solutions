#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define sz(a) (ll)a.size()
#define f first
#define s second
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lpr(i,start,end,val) for(i=start;i>=end;i-=val)
#define lp(i,n) for(i=0;i<n;i++)
multiset<ll> ms;
bool comparator(pair< pair<ll,ll> ,ll> p1, pair< pair<ll,ll> ,ll> p2)
{
	return (p1.f).f < (p2.f).f;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,i;
	cin>>n>>k;
	vector< pair<pair<ll,ll> , ll> > p;
	ll po[n],co[n],ans[n];
	lp(i,n)
		cin>>po[i];
	lp(i,n)
		cin>>co[i];
	lp(i,n)
	{
		p.pb(mp(mp(po[i],co[i]),i));
		ans[i]=0;
	}
	sort(p.begin(),p.end(),comparator);
	// lp(i,n)
	// 	cout<<p[i].f.f<<" ";
	// cout<<endl;
	// lp(i,n)
	// 	cout<<p[i].f.s<<" ";
	// cout<<endl;
	// lp(i,n)
	// 	cout<<p[i].s<<" ";
	// cout<<endl;
	ll sum_max=0; 
	lp(i,n)
	{
		if(sz(ms)<=k)
		{
			sum_max+=p[i].f.s;
			ms.insert(p[i].f.s);
			ans[p[i].s]=sum_max;
		}
		else
		{
			sum_max-=*(ms.begin());
			ms.erase(ms.begin());
			sum_max+=p[i].f.s;
			ms.insert(p[i].f.s);
			ans[p[i].s]=sum_max;
		}
	}
	lp(i,n)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}