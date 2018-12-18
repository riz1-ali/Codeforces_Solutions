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
	int t;
	cin>>t;
	while(t--)
	{
		string s,t;
		cin>>s;
		t=s;
		reverse(t.begin(),t.end());
		set<char> se;
		for(int i=0;i<s.size();i++)
			se.insert(s[i]);
		if(s==t && se.size()==1)
		{
			cout<<"-1\n";
			continue;
		}
		else if(s!=t)
		{
			cout<<s<<endl;
			continue;
		}
		int x=1;
		while(s[x]==s[0] && x<s.size())
			x++;
		swap(s[0],s[x]);
		cout<<s<<endl;
	}	
	return 0;
}
