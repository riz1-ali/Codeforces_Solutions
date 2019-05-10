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
map<ll,ll> counts;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	lp(n)
	{
		cin>>arr[i];
		counts[arr[i]]=0;
	}
	lp(n)
		counts[arr[i]]++;
	ll ans=0,a,b,c;
	lp(n)
	{
		for(ll j=0;j<n;j++)
		{
			if(i==j)
				continue;
			a=arr[i],b=arr[j];
			if(!a and !b)
			{
				ans=max(ans,counts[a]);
				continue;
			}
			vector<ll> repair;
			repair.pb(a);
			repair.pb(b);
			counts[a]--;
			counts[b]--;
			while(1)
			{
				c=a+b;
				if(counts.find(c)!=counts.end() and counts[c]>0)
				{
					counts[c]--;
					repair.pb(c);
					a=b;
					b=c;
				}
				else
					break;
			}
			ans=max(ans,(ll)repair.size());
			for(auto it:repair)
				counts[it]++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
