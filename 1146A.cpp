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
	ll a=0;
	string s;
	cin>>s;
	for(ll i=0;i<s.size();i++)
		if(s[i]=='a')
			a++;
	if(2*a>s.size())
		cout<<s.size()<<endl;
	else
		cout<<2*a-1<<endl;
	return 0;
}
