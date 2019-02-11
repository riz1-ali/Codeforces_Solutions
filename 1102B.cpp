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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll arr[n],ans[n];
	lp(n)
		cin>>arr[i];
	set<ll> colors[k+1];
	set<ll> marked;
	set<pll> coor_col[k+1];
	lpi(i,1,k)
		marked.insert(i);
	lp(n)
	{
		bool flag=1;
		lpi(j,1,k)
		{
			if(colors[j].find(arr[i])==colors[j].end())
			{
				flag=0;
				colors[j].insert(arr[i]);
				coor_col[j].insert(mp(arr[i],i));
				ans[i]=j;
				marked.erase(j);
				break;
			}
		}
		if(flag)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	for(auto it:marked)
	{
		int co=0;
		lpi(i,1,k)
		{
			if(coor_col[i].size()>1)
			{
				set<pll> temp;
				bool flag=0;
				while(!coor_col[i].empty())
				{
					pll x=(*coor_col[i].begin());
					coor_col[i].erase(x);
					colors[i].erase(x.f);
					if(colors[it].find(x.f)==colors[it].end())
					{
						ans[x.s]=it;
						coor_col[it].insert(x);
						colors[it].insert(x.f);
						co=1;
						flag=1;
						break;
					}
					else
					{
						temp.insert(x);
						colors[i].insert(x.f);
					}
				}
				for(auto it:temp)
					coor_col[i].insert(it);
				if(flag)
					break;
			}
		}
		if(!co)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	lp(n)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
