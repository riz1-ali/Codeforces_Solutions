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
	ll n,a,ans=0;
	cin>>n;
	vector<ll> arr;
	lp(n)
	{
		cin>>a;
		arr.pb(a);
	}
	sort(arr.begin(),arr.end());
	deque<ll> dq;
	for(ll i=n-1;i>=0;i--)
	{
		if(dq.empty())
		{
			dq.pb(arr[i]);
			ans=max(ans,(ll)dq.size());
			continue;
		}
		if(dq.front()-arr[i]>5)
		{
			ans=max(ans,(ll)dq.size());
			dq.pop_front();
			i++;
			continue;			
		}
		else
		{
			dq.pb(arr[i]);
			ans=max(ans,(ll)dq.size());
		}
	}
	ans=max(ans,(ll)dq.size());
	cout<<ans<<endl;
	return 0;
}
