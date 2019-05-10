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
	ll n,a,sa=0,sb=0;
	cin>>n;
	deque<ll> a1,a2;
	lp(n)
	{
		cin>>a;
		a1.pb(a);
	}
	lp(n)
	{
		cin>>a;
		a2.pb(a);
	}
	sort(a1.begin(),a1.end(),greater<ll>());
	sort(a2.begin(),a2.end(),greater<ll>());
	bool turn=0;
	while(!a1.empty() or !a2.empty())
	{
		ll f1=0,f2=0;
		if(!a1.empty())
			f1=a1.front();
		if(!a2.empty())
			f2=a2.front();
		if(!turn)
		{
			if(f1>=f2)
			{
				sa+=f1;
				a1.pop_front();
			}
			else
				a2.pop_front();
		}
		else
		{
			if(f2>=f1)
			{
				sb+=f2;
				a2.pop_front();
			}
			else
				a1.pop_front();
		}
		turn=!turn;
	}
	cout<<sa-sb<<endl;
	return 0;
}
