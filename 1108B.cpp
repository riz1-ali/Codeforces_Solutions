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
	map<ll,ll> m;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		m[arr[i]]=0;
	}
	sort(arr,arr+n);
	bool use[n];
	for(int i=0;i<n;i++)
	{
		use[i]=0;
		m[arr[i]]++;
	}

	ll a,b,f=0;
	set<ll> uniq;
	uniq.insert(arr[n-1]);
	for(int j=n-2;j>=0;j--)
		if(arr[n-1]%arr[j]==0)
			uniq.insert(arr[j]);
	for(auto it:uniq)
		for(int i=0;i<n;i++)
			if(it==arr[i])
			{
				use[i]=1;
				break;
			}
	for(int i=n-1;i>=0;i--)
		if(!use[i])
		{
			b=arr[i];
			break;
		}
	cout<<arr[n-1]<<" "<<b<<endl;
	return 0;
}
