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
	ll arr[n],sum=0,pve=0,nve=0,keyp=1e18;
	lp(n)
	{
		cin>>arr[i];
		sum+=abs(arr[i]);
		if(arr[i]>=0)
			pve=1;
		else
			nve=1;
		keyp=min(keyp,abs(arr[i]));
	}
	if(n==1)
	{
		cout<<arr[0]<<endl;
		return 0;
	}
	if(pve and nve)
		cout<<sum<<endl;
	else
		cout<<sum-2*keyp<<endl;
	return 0;
}
