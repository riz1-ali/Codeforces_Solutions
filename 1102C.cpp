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
	ll n,x,y,a,t_ans=0;
	cin>>n>>x>>y;
	multiset<ll> strong,weak;
	lp(n)
	{
		cin>>a;
		if(a>x)
			strong.insert(a);
		else
		{
			t_ans++;
			weak.insert(a);
		}
	}
	if(x>y)
	{
		cout<<n<<endl;
		return 0;
	}
	else if(x<y)
	{
		if(t_ans%2)
			cout<<(t_ans/2)+1<<endl;
		else
			cout<<(t_ans/2)<<endl;
		return 0;
	}
	while(!weak.empty())
	{
		ll val=*(weak.begin());
		weak.erase(weak.begin());
		// cout<<"-> "<<val<<endl;
		if(weak.empty())
			break;
		val=*(--weak.end());
		// cout<<"-> "<<val<<endl;
		weak.erase(--weak.end());
		if(val+y>x)
			strong.insert(val+y);
		else
			weak.insert(val+y);
	}
	cout<<n-strong.size()<<endl;
	return 0;
}
