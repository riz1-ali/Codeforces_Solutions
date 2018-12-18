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
	int n;
	cin>>n;
	string s,t,ans;
	cin>>s;
	int trav[n];
	trav[n-1]=1;
	lp(n-1)
	{
		if(s[i]>s[i+1])
			trav[i]=1;
		else
			trav[i]=0;
	}
	int flag=0;
	lp(n)
	{
		if(flag || !trav[i])
			cout<<s[i];
		else if(!flag)
			flag=1;
	}
	cout<<endl;
	return 0;
}