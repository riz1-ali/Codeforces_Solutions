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
	ll a[n+1],cost[n+1],ans=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	set<pll> ind_cost;
	for(int i=1;i<=n;i++)
	{
		cin>>cost[i];
		ind_cost.insert(mp(cost[i],i));
	}
	ll t,d;
	for(int i=0;i<m;i++)
	{
		cin>>t>>d;
		ans=0;
		// cout<<"----------\n";
		if(a[t]>d)
		{
			a[t]-=d;
			ans+=d*cost[t];
			d=0;
		}
		else if(a[t]!=0)
		{
			ans+=a[t]*cost[t];
			d-=a[t];
			a[t]=0;
			auto it=ind_cost.lower_bound({cost[t],t});
			ind_cost.erase(it);
		}
		// cout<<"--- "<<ans<<" "<<i<<" "<<d<<" ---\n";
		// for(auto it:ind_cost)
		// 	cout<<it.f<<" "<<it.s<<" "<<a[it.s]<<endl;
		while(d and !ind_cost.empty())
		{
			// cout<<d<<" -- "<<i<<endl;
			auto it=ind_cost.begin();
			pll ax=*it;
			ind_cost.erase(it);
			ll y=min(a[ax.s],d);
			a[ax.s]-=y;
			d-=y;
			ans+=y*ax.f;
			if(a[ax.s]!=0)
				ind_cost.insert(ax);
		}
		// for(int j=1;j<=n;j++)
		// 	cout<<a[j]<<" ";
		// cout<<endl;
		if(!d)
			cout<<ans<<endl;
		else
			cout<<"0\n";
	}
	return 0;
}
