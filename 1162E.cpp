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
	ll n,a;
	cin>>n;
	priority_queue <ll> ms;
	ll mini=1e18;
	lp(n)
	{
		cin>>a;
		mini=min(a,mini);
		ms.push(a);
	}
	bool turn=1;
	ll v=n/2,k;
	while(!ms.empty())
	{
		turn=!turn;
		k=v;
		vector<ll> x;
		ll mv=1e18;
		while(k--)
		{
			mv=min(mv,ms.top());
			ms.pop();
		}
		if(mv==mini)
			break;
		k=v;
		while(k--)
			ms.push(mini);
	}
	if(turn)
		cout<<"Alice\n";
	else
		cout<<"Bob\n";
	return 0;
}
