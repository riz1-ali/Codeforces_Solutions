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
bool comp(pll a,pll b)
{
	return a.s>b.s;
}
bool comp2(pll a,pll b)
{
	return a.s<b.s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n],c,maxi=0;
	ll minc[n],maxc[n];
	lp(n)
		minc[i]=1e9;
	lp(n)
		maxc[i]=-1;
	lp(n)
	{
		cin>>arr[i];
		minc[arr[i]-1]=min(minc[arr[i]-1],i);
		maxc[arr[i]-1]=max(maxc[arr[i]-1],i);
	}
	vector<pll> minx,maxx;
	lp(n)
	{
		if(minc[i]!=1e9 or maxc[i]!=-1)
		{
			minx.pb(mp(i,minc[i]));
			maxx.pb(mp(i,maxc[i]));
		}
	}
	sort(minx.begin(),minx.end(),comp2);
	sort(maxx.begin(),maxx.end(),comp);
	// for(auto it:maxx)
	// 	cout<<it.f<<" "<<it.s<<endl;
	// for(auto it:minx)
	// 	cout<<it.f<<" "<<it.s<<endl;
	if(minx[0].f!=maxx[0].f)
		cout<<maxx[0].s-minx[0].s<<endl;
	else
		cout<<max(maxx[0].s-minx[1].s,maxx[1].s-minx[0].s)<<endl;
	return 0;
}
