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
	ll a,n;
	string s;
	cin>>n>>s;
	map<ll,ll> m;
	lp(9)
	{
		cin>>a;
		m[i+1]=a;
	}
	ll pos=-1;
	for(ll i=0;i<n;i++)
	{
		// cout<<m[s[i]-'0']<<" "<<s[i]-'0'<<endl;
		if(m[s[i]-'0']>s[i]-'0')
		{
			pos=i;
			break;
		}
	}
	while(pos<n and pos>=0)
	{
		if(m[s[pos]-'0']<s[pos]-'0')
			break;
		s[pos]=char(m[s[pos]-'0']+'0');
		pos++;
	}
	cout<<s<<endl;
	return 0;
}
