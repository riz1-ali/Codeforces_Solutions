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
	ll arr[n];
	lp(n)
		cin>>arr[i];
	sort(arr,arr+n);
	ll sum[n],pre[n];
	lp(n)
	{
		if(!i)
			sum[i]=arr[i];
		else
			sum[i]=sum[i-1]+arr[i];
	}
	for(ll i=n-1;i>=0;i--)
	{
		if(i==n-1)
			pre[i]=arr[i];
		else
			pre[i]=pre[i+1]+arr[i];
	}
	ll m,a;
	cin>>m;
	while(m--)
	{
		cin>>a;
		if(a!=n)
			cout<<pre[n-a+1]+sum[n-a-1]<<endl;
		else
			cout<<pre[n-a+1]<<endl;
	}
	return 0;
}
