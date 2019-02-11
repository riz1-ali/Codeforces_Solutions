#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=998244353;
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
	ll n=s.size();
	string ans="";
	ll eb=-1,sb=-1,ec=-1,sc=-1;
	lp(n)
	{
		if(s[i]=='[')
		{
			sb=i;
			break;
		}
	}
	lpr(i,n-1,0)
	{	
		if(s[i]==']')
		{
			eb=i;
			break;
		}
	}
	if(eb<=sb || eb==-1 || sb==-1)
	{
		cout<<"-1\n";
		return 0;
	}
	lpi(i,sb+1,n-1)
	{
		if(s[i]==':')
		{
			sc=i;
			break;
		}
	}
	lpr(i,eb-1,0)
	{	
		if(s[i]==':')
		{
			ec=i;
			break;
		}
	}
	if(ec<=sc || ec==-1 || sc==-1 || sc<=sb || ec>=eb)
	{
		cout<<"-1\n";
		return 0;
	}
	ans+='[';
	lpi(i,sc,ec)
	{
		if(s[i]==':')
		{
			if(i==sc || i==ec)
				ans+=s[i];
		}
		if(s[i]=='|')
			ans+=s[i];
	}
	ans+=']';
	cout<<ans.size()<<endl;
	return 0;
}
