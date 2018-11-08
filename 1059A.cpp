#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	ll n,l,a,b,c,ans=0;
	cin>>n>>l>>a;
	if(n==0)
	{
		cout<<l/a<<endl;
		return 0;
	}
	vector<pair<ll,ll> > v;
	lp(n)
	{
		cin>>b>>c;
		v.pb(mp(b,c));
	}
	sort(v.begin(),v.end());
	if(v[0].f!=0)
	{
		if(v[0].f>=a)
			ans+=v[0].f/a;
	}
	lp(n-1)
	{
		if(v[i+1].f-(v[i].f+v[i].s)>=a)
			ans+=(v[i+1].f-(v[i].f+v[i].s))/a;
	}
	ans+=(l-(v[n-1].f+v[n-1].s))/a;
	cout<<ans<<endl;
	return 0;
}