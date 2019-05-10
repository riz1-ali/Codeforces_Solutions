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
	ll n;
	string s,ans;
	cin>>n>>s;
	if(n%2 || s[0]==')')
	{
		cout<<":(\n";
		return 0;
	}
	ll l=0,r=0;
	lp(n)
	{
		if(s[i]=='(')
			l++;
		if(s[i]==')')
			r++;
	}
	if(l>n/2 or r>n/2)
	{
		cout<<":(\n";
		return 0;
	}
	l=(n/2)-l;
	lp(n)
	{
		if(s[i]!='?')
			ans+=s[i];
		else
		{
			if(l)
			{
				l--;
				ans+='(';
			}
			else
				ans+=')';
		}
	}
	ll c=0;
	lp(n)
	{
		if(ans[i]=='(')
			c++;
		else
			c--;
		if(c<=0 and i!=n-1)
		{
			cout<<":(\n";
			return 0;
		}
	}
	if(c!=0)
	{
		cout<<":(\n";
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}
