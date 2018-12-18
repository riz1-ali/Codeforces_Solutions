#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n],sum=0;
	map<ll,ll> m;
	vector<ll> ans;
	lp(n)
	{
		cin>>arr[i];
		m[arr[i]]=0;
		sum+=arr[i];
	}
	lp(n)
		m[arr[i]]++;
	lp(n)
	{
		m[arr[i]]--;
		if((sum-arr[i])%2==0)
		{
			if(m[(sum-arr[i])/2]>0 && m.find((sum-arr[i])/2)!=m.end())
				ans.pb(i+1);
		}
		m[arr[i]]++;
	}
	cout<<ans.size()<<endl;
	for(auto it:ans)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}