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
	string s;
	cin>>s;
	string k[5];
	lp(5)
		cin>>k[i];
	bool flag=0;
	lp(5)
	{
		if(k[i][0]==s[0] || k[i][1]==s[1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
