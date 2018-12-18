#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
const ll d=1000000007;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
#define sz(a) (ll)(a).size()
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	ll n=s.size(),ans=1,temp=0;
	vector<ll> bin;
	lp(n)
	{
		if(s[i]=='b' && temp)
		{
			bin.pb(temp);
			temp=0;
		}
		if(s[i]=='a')
			temp++;
	}
	if(temp)
		bin.pb(temp);	
	for(ll i=0;i<bin.size();i++)
		ans=(((ans*bin[i])%d)+ans)%d;
	cout<<(ans-1)%d<<endl;
	return 0;
}