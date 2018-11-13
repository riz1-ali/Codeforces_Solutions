#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	int n,m;
	cin>>n>>m;
	string s[n];
	set<char> st[m];
	lp(n)
		cin>>s[i];
	lp(m)
	{
		for(int j=0;j<n;j++)
			st[i].insert(s[j][i]);
	}
	ll ans=1;
	lp(m)
		ans=(ans*(ll(st[i].size())))%1000000007;
	cout<<ans<<endl;
	return 0;
}