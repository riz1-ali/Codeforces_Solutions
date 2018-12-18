#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
string solve(string s,int l,int r,int k)
{
	string t=s.substr(l,r-l+1);
	string left=t.substr(0,t.size()-k);
	string right=t.substr(t.size()-k,k);
	t=right+left;
	lpi(i,l,r)
		s[i]=t[i-l];
	return s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	int q,l,r,k;
	cin>>q;
	while(q--)
	{
		cin>>l>>r>>k;
		s=solve(s,l-1,r-1,k%(r-l+1));
	}
	cout<<s<<endl;
	return 0;
}