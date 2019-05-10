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
	vector<ll> low,high;
	ll arr[n];
	map<ll,ll> m;
	lp(n)
	{
		cin>>arr[i];
		m[arr[i]]=0;
	}
	lp(n)
		m[arr[i]]++;
	lp(n)
		if(m[arr[i]]>2)
		{
			cout<<"NO\n";
			return 0;
		}
	lp(n)
	{
		if(m[arr[i]]==1)
			low.pb(arr[i]);
		else
		{
			high.pb(arr[i]);
			m[arr[i]]--;
		}
	}
	sort(all(low));
	sort(all(high),greater<ll>());
	cout<<"YES\n"<<low.size()<<endl;
	for(auto it:low)
		cout<<it<<" ";
	cout<<endl<<high.size()<<endl;
	for(auto it:high)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}
