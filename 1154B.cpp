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
	set<ll> uniq;
	ll n,a;
	cin>>n;
	lp(n)
	{
		cin>>a;
		uniq.insert(a);
	}
	if(uniq.size()>3)
	{
		cout<<"-1\n";
		return 0;
	}
	if(uniq.size()==1)
	{
		cout<<"0\n";
		return 0;
	}
	vector<ll> v;
	for(auto it:uniq)
		v.pb(it);
	if(uniq.size()==2)
		if((v[1]-v[0])%2)
			cout<<abs(v[1]-v[0])<<endl;
		else
			cout<<(v[1]-v[0])/2<<endl;
	else
		if(v[1]-v[0]!=v[2]-v[1])
			cout<<"-1\n";
		else
			cout<<v[1]-v[0]<<endl;
	return 0;
}
