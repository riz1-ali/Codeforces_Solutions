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
ll perm(ll k,ll n)
{
	ll id=1,ans=0,a;
	a=(n/k);
	ans=((a*(a*k-k+2))/2);
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,ans=0;
	cin>>n;
	set<ll> fact,poss;
	for(ll i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			fact.insert(i);
			fact.insert(n/i);
		}
	}
	for(auto it:fact)
		poss.insert(perm(it,n));
	for(auto it:poss)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}
