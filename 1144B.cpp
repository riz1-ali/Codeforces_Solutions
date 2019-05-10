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
	ll maxo=-1,maxe=-1,sum=0;
	vector<ll> oddp,evenp;
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
		if(arr[i]%2)
		{
			maxo=max(maxo,arr[i]);
			oddp.pb(arr[i]);
		}
		else
		{
			maxe=max(maxe,arr[i]);
			evenp.pb(arr[i]);
		}
	}
	ll mino=sum,mine=sum;
	sort(all(oddp),greater<ll>());
	sort(all(evenp),greater<ll>());
	if(maxe!=-1)
	{
		ll op=0,ep=0,ts=sum;
		bool flag=0;
		lp(n)
		{
			flag=!flag;
			if(flag%2)
				if(ep<evenp.size())
					ts-=evenp[ep++];
				else
					break;
			else
				if(op<oddp.size())
					ts-=oddp[op++];
				else
					break;
		}
		mine=ts;
	}
	if(maxo!=-1)
	{
		ll op=0,ep=0,ts=sum;
		bool flag=0;
		lp(n)
		{
			flag=!flag;
			if(flag%2)
				if(op<oddp.size())
					ts-=oddp[op++];
				else
					break;
			else
				if(ep<evenp.size())
					ts-=evenp[ep++];
				else
					break;
		}
		mino=ts;
	}
	cout<<min(mino,mine)<<endl;
	return 0;
}
