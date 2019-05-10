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
	ll k;
	cin>>k;
	string s;
	cin>>s;
	ll sum=0;
	vector<ll> v;
	for(auto it:s)
	{
		sum+=it-'0';
		v.pb((ll)(it-'0'));
	}
	if(sum>k)
	{
		cout<<"0\n";
		return 0;
	}
	sort(all(v));
	ll diff=k-sum,ans=0,max_allow;
	for(ll i=0;i<v.size() and diff>0;i++)
	{
		if(v[i]==9)
			continue;
		max_allow=(ll)(9-v[i]);
		v[i]=(char)(v[i]+min(diff,max_allow));
		diff-=min(diff,max_allow);
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
