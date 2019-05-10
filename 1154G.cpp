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
map<ll,vector<ll> > pos;
ll check[10000010];
bool comp(pll a,pll b){
	if(a.f!=b.f)
		return a.f<b.f;
	return a.s<b.s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n],lc_min=1e18,limi=-1;
	vector<pll> v;
	lp(n)
	{
		cin>>arr[i];
		pos[arr[i]].pb(i);
		check[arr[i]]=1;
		limi=max(limi,arr[i]);
		v.pb(mp(arr[i],i));
	}
	ll mi1,mi2;
	for(ll i=1;i<=limi;i++)
	{
		// if(!check[i])
		// 	continue;
		ll tmi1,tmi2,c=0;
		for(ll j=i;j<=limi;j+=i)
		{
			if(!check[j])
				continue;
			// cout<<i<<" "<<j<<endl;
			if(c==0)
			{
				if(pos[j].size()==1)
				{
					tmi1=pos[j][0];
					c++;
					continue;
				}
				else
				{
					tmi1=pos[j][0],tmi2=pos[j][1];
					c=2;
					break;
				}
			}
			else
			{
				tmi2=pos[j][0];
				c++;
				break;
			}
		}
		if(c==2)
		{
			ll tlc_min=(arr[tmi1]*arr[tmi2])/gcd(arr[tmi1],arr[tmi2]);
			if(tlc_min<lc_min)
			{
				lc_min=tlc_min;
				mi1=tmi1,mi2=tmi2;
			}
		}
	}
	cout<<min(mi1,mi2)+1<<" "<<max(mi1,mi2)+1<<endl;
	return 0;
}
