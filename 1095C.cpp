#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
const ll mod=1000000007;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(int i=0;i<n;i++)
struct comp{
	bool operator()(ll a,ll b)
	{
		return a>b;
	}
};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	if(n<k)
	{
		cout<<"NO\n";
		return 0;
	}
	multiset<ll,comp> ms;
	ll d=1;
	while(d<n)
		d*=2;
	while(n)
	{
		if(n>=d)
			ms.insert(d),n-=d;
		else
			d/=2;
	}
	if(ms.size()<k)
	{
		ll x=ms.size();
		while(x<k)
		{
			auto it=ms.begin();
			ll y=*it;
			if(y==1)
				break;
			ms.erase(it);
			ms.insert(y/2),ms.insert(y/2);
			x++;
		}
	}
	if(ms.size()!=k)
	{
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	for(auto it:ms)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}
