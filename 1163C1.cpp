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
bool inters(ld a1,ld b1,ld a2,ld b2)
{
	return a1*b2==a2*b1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	vector<pll> vp;
	pll p;
	lp(n)
	{
		cin>>p.f>>p.s;
		vp.pb(p);
	}
	sort(all(vp));
	set<pair<pll,pll> > intro;
	ll dx,dy,c,g,cn,cd;
	for(ll i=0;i<n;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			dx=vp[i].f-vp[j].f;
			dy=vp[i].s-vp[j].s;
			if(dx<0)
				dx*=-1,dy*=-1;
			g=gcd(dx,dy);
			dx/=g,dy/=g;
			if(dx==0)
				cn=vp[i].f,cd=1;
			else if(dy==0)
				cn=1,cd=vp[i].s;
			else
			{
				cn=vp[i].s*dx-vp[i].f*dy;
				cd=dx;
				g=gcd(cn,cd);
				cn/=g,cd/=g;
			}
			intro.insert(mp(mp(dx,dy),mp(cn,cd)));
		}
	}
	vector<pair<pll,pll> > introx;
	for(auto it:intro)
		introx.pb(it);
	ll ans=0;
	ld a1,b1,a2,b2;
	for(ll i=0;i<introx.size();i++)
	{
		a1=introx[i].f.f,b1=introx[i].f.s;
		for(ll j=i+1;j<introx.size();j++)
		{
			a2=introx[j].f.f,b2=introx[j].f.s;
			if(inters(a1,b1,a2,b2))
				continue;
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
