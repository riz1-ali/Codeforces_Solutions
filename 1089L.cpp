#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
bool comp(pll a,pll b)
{
	if(a.f!=b.f)
		return a.f<b.f;
	return a.s>b.s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,ans=0;
	cin>>n>>k;
	set<ll> jobs;
	multiset<ll> time;
	lpi(i,1,k)
		jobs.insert(i);
	ll num_j[n],num_time[n];
	lp(n)
		cin>>num_j[i];
	lp(n)
		cin>>num_time[i];
	vector<pll> px;
	lp(n)
		px.pb(mp(num_j[i],num_time[i]));
	sort(px.begin(),px.end(),comp);
	for(auto it:px)
	{
		if(jobs.find(it.f)==jobs.end())
			time.insert(it.s);		
		jobs.erase(it.f);
	}
	while(!jobs.empty())
	{
		ans+=*(time.begin());
		jobs.erase(jobs.begin());
		time.erase(time.begin());
	}
	cout<<ans<<endl;
	return 0;
}