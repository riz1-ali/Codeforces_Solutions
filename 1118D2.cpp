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
bool check(ll arr[],ll n,ll val,ll m)
{
	ll ans=0;
	for(ll i=0;i<n;i++)
		ans+=max(0ll,arr[i]-i/val);
	return ans>=m;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll arr[n],sum=0;
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum<m)
	{
		cout<<"-1\n";
		return 0;
	}
	sort(arr,arr+n,greater<ll>());
	ll ans=n;
	ll start=1,end=n,mid;
	while(start<end)
	{
		mid=(start+end)/2;
		if(check(arr,n,mid,m))
			end=mid;
		else
			start=mid+1;
	}
	cout<<start<<endl;
	return 0;
}
