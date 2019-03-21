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
	ll arr[n],odd=0,even=0,ans=0,prev_o,prev_e;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i%2==0)
			odd+=arr[i];
		else
			even+=arr[i];
	}
	prev_o=0,prev_e=0;
	for(ll i=0;i<n;i++)
	{
		if(i%2==0)
			odd-=arr[i];
		else
			even-=arr[i];
		if(odd+prev_e==even+prev_o)
			ans++;
		if(i%2==0)
			prev_o+=arr[i];
		else
			prev_e+=arr[i];
	}
	cout<<ans<<endl;
	return 0;
}
