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
vector<ll> pos[100010];
int main()
{
	ll n;
	cin>>n;
	ll arr[2*n+10];
	for(ll i=1;i<=2*n;i++)
	{
		cin>>arr[i];
		pos[arr[i]].pb(i);
	}
	ll ans=0,cpos1=1,cpos2=1;
	for(ll i=1;i<=n;i++)
	{
		ll dis1=abs(cpos1-pos[i][0])+abs(cpos2-pos[i][1]),dis2=abs(cpos1-pos[i][1])+abs(cpos2-pos[i][0]);
		if(dis1<=dis2)
		{
			cpos1=pos[i][0];
			cpos2=pos[i][1];
			ans+=dis1;
		}
		else
		{
			cpos1=pos[i][1];
			cpos2=pos[i][0];
			ans+=dis2;
		}
	}
	cout<<ans<<endl;
	return 0;
}
