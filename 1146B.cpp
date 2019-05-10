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
	string t,s1="",s="";
	cin>>t;
	bool flag=0;
	for(ll i=t.size();i>=0;i--)
	{
		if(t[i]=='a')
			flag=1;
		if(flag)
			s+=t[i];
		else
			s1+=t[i];
	}
	reverse(s1.begin(),s1.end());
	reverse(s.begin(),s.end());
	string c="";
	for(ll i=0;i<s.size();i++)
		if(s[i]!='a')
			c+=s[i];
	string r="";
	if(c!=s1)
	{
		while(c.size()!=s1.size()-1 and !s1.empty())
		{
			c+=s1[0];
			r+=s1[0];
			s1.erase(0,1);
		}
	}
	string x=s+r;
	c="";
	for(ll i=0;i<x.size();i++)
		if(x[i]!='a')
			c+=x[i];
	if(c+'\0'!=s1)
	{
		cout<<":(\n";
		return 0;
	}
	cout<<s+r<<endl;
	return 0;
}
