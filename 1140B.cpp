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
	ll t;
	cin>>t;
	while(t--)
	{
		ll ans=0,n;
		string s;
		cin>>n>>s;
		n=s.size();
		ll m1=0,m2=0;
		lp(n)
		{
			if(s[i]=='>')
				break;
			m1++;
		}
		for(ll i=n-1;i>=0;i--)
		{
			if(s[i]=='<')
				break;
			m2++;
		}
		cout<<min(m1,m2)<<endl;
	}
	return 0;
}
