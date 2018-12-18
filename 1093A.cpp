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
	int t,a,x,k;
	cin>>t;
	while(t--)
	{
		cin>>a;
		x=0;
		k=7;
		while(a%k==1)
			k--;
		x+=a/k;
		a%=k;
		if(a)
			x++;
		cout<<x<<endl;
	}	
	return 0;
}
