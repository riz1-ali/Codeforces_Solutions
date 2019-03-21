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
ll ceil(ll a,ll b)
{
	if(a%b==0)
		return a/b;
	return (a/b)+1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll dd;
	cin>>dd;
	ll arr[dd],p=0,n=0;
	lp(dd)
	{
		cin>>arr[i];
		if(arr[i]>0)
			p++;
		else if(arr[i]<0)
			n++;
	}
	ll targ=ceil(dd,2);
	if(p>=targ)
	{
		cout<<"1\n";
		return 0;
	}
	if(n>=targ)
	{
		cout<<"-1\n";
		return 0;
	}
	cout<<"0\n";
	return 0;
}
