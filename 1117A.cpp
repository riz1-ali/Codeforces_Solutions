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
	ll n;
	cin>>n;
	ll arr[n],maxi=-1,ans=1;
	lp(n)
	{
		cin>>arr[i];
		maxi=max(maxi,arr[i]);
	}

	lp(n)
	{
		if(arr[i]==maxi)
		{
			ll j=i,t=0;
			while(arr[j]==maxi)
			{
				t++;
				j++;
			}
			ans=max(ans,t);
			i=j-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
