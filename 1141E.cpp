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
	ll h,n,tf=0,ans=0;
	cin>>h>>n;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	ll ta=0,th=h,v=0,f=0,max_d=1e18,supp[n];
	for(ll i=0;i<n;i++)
	{
		th+=arr[i];
		v+=arr[i];
		// cout<<i<<" "<<th<<" "<<arr[i]<<endl;
		supp[i]=v;
		max_d=min(max_d,supp[i]);
		ta++;
		if(th<=0)
		{
			f=1;
			break;
		}
	}
	// lp(n)
	// 	cout<<supp[i]<<" ";
	// cout<<endl;
	// cout<<max_d<<endl;
	if(th>=h || max_d>=0)
	{
		cout<<"-1\n";
		return 0;
	}
	if(f)
	{
		cout<<ta<<endl;
		return 0;
	}
	ll diff=h-th;
	tf=(h-abs(max_d))/diff;
	ans+=n*tf;
	h-=tf*diff;
	if(h<=0)
	{
		cout<<ans<<endl;
		return 0;
	}
	while(h>0)
	{
		for(ll i=0;i<n;i++)
		{
			h+=arr[i];
			ans++;
			if(h<=0)
				break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
