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
	ll n,b,a,dist=0;
	cin>>n>>b>>a;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	ll cur=0,tb=b,ta=a;
	for(ll i=0;i<n;i++)
	{
		if(arr[i])
		{
			if(tb>0)
			{
				if(ta<a)
				{
					ta++;
					cur=i+1;
					tb--;
					ta=min(ta,a);
				}
				else
				{
					ta--;
					cur=i+1;
				}
			}
			else if(ta>0)
			{
				ta--;
				cur=i+1;
			}
			else
				break;
		}
		else
		{
			if(ta>0)
			{
				ta--;
				cur=i+1;
			}
			else if(tb>0)
			{
				tb--;
				cur=i+1;
			}
			else
				break;
		}
	}
	cout<<min(max(cur,a+b),n)<<endl;	
	return 0;
}
