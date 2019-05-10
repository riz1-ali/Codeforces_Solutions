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
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	sort(arr,arr+n);
	vector<ll> trav(n,0);
	ll r=n/2,ans=0;
	for(ll i=0;i<n and r<n;i++)
	{
		if(trav[i])
			continue;
		while(arr[r]-arr[i]<k and r<n)
		{
			r++;
			if(r==n)
			{
				cout<<ans<<endl;
				return 0;
			}
		}
		trav[i]=trav[r]=1;
		ans++;
		r++;
	}
	cout<<ans<<endl;
	return 0;
}
