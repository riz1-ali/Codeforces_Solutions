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
	ll arr[n],sum=0,ansy=1e9;
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	ansy=sum;
	ll mini=1e9,ind;
	lp(n)
	{
		if(arr[i]<mini)
		{
			mini=arr[i];
			ind=i;
		}
	}
	for(ll i=0;i<n;i++)
	{
		if(i==ind)
			continue;
		set<ll> fact;
		for(ll j=2;j*j<=arr[i];j++)
			if(arr[i]%j==0)
			{
				fact.insert(j);
				fact.insert(arr[i]/j);
			}
		ll ans=mini+arr[i];
		ll minx=ans;
		sum-=ans;
		for(auto it:fact)
			minx=min(minx,(arr[i]/it)+mini*it);
		ansy=min(ansy,sum+minx);
		sum+=ans;
	}
	cout<<ansy<<endl;
	return 0;
}