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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	ll ans=0;
	lp(n-1)
	{
		if(arr[i]==1)
		{
			if(arr[i+1]==2)
				ans+=3;
			else
				ans+=4;
		}
		else if(arr[i]==2)
		{
			if(arr[i+1]==1)
				ans+=3;
			else
			{
				cout<<"Infinite\n";
				return 0;
			}
		}
		else
		{
			if(arr[i+1]==1)
				ans+=4;
			else
			{
				cout<<"Infinite\n";
				return 0;
			}
		}
	}
	for(ll i=n-1;i>=2;i--)
	{
		ll e1=arr[i],e2=arr[i-1],e3=arr[i-2];
		if(e1==2 and e2==1 and e3==3)
			ans--;
	}
	cout<<"Finite\n"<<ans<<endl;
	return 0;
}
