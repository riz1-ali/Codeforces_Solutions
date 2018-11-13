#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
struct comp
{
	bool operator()(const pair<pair<ll,ll>,ll> &a, const pair<pair<ll,ll>,ll> &b) const{
		if(a.f.s != b.f.s)
			return a.f.s > b.f.s;
		else 
			return a.f.f < b.f.f;
	}
};
multiset<pair<pair<ll,ll>,ll>,comp> s;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,a,b,sum=0,ac=0;
	cin>>n;
	lp(n)
	{
		cin>>a>>b;
		s.insert(mp(mp(a,b),i));
	}
	cin>>k;
	multiset<pair<ll,ll> > v;
	ll ind[k];
	lp(k)
	{
		ind[i]=-1;
		cin>>a;
		v.insert(mp(a,i));
	}
	for(multiset<pair<pair<ll,ll>,ll>,comp>::iterator it=s.begin();it!=s.end();it++)
	{
		multiset<pair<ll,ll> >::iterator t=v.lower_bound({it->f.f,0});
		if(t!=v.end())
		{
			v.erase(t);
			ind[t->s]=it->s+1;
			sum+=it->f.s;
			ac++;
		}
	}
	cout<<ac<<" "<<sum<<endl;
	lp(k)
		if(ind[i]!=-1)
			cout<<ind[i]<<" "<<i+1<<endl;
	return 0;
}