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
set<ll> use,prime,fact;
map<ll,ll> count_fact;
void sieve(ll n)
{
	bool trav[1000010];
	for(ll i=0;i<1000010;i++)
		trav[i]=1;
	for(ll i=2;i<1000010;i++)
	{
		if(trav[i])
		{
			prime.insert(i);
			for(ll j=i*2;j<1000010;j+=i)
				trav[j]=0;
		}
	}
	for(auto it:prime)
	{
		if(fact.find(it)!=fact.end())
		{
			use.insert(it);
			while(n%it==0)
			{
				count_fact[it]++;
				n/=it;
			}
		}
	}
	if(n!=1)
	{
		count_fact[n]=1;
		use.insert(n);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,b;
	cin>>n>>b;
	ll zero=1e18+10;
	for(ll i=1;i*i<=b;i++)
	{
		if(b%i==0)
		{
			fact.insert(i);
			fact.insert(b/i);
			count_fact[i]=count_fact[b/i]=0;
		}
	}
	sieve(b);
	for(auto it:use)
	{
		ll t=0;
		for(ll i=it;n>=i;i*=it)
		{
			t+=n/i;
			if(n/i<it)
				break;
		}
		zero=min(zero,t/count_fact[it]);
	}
	cout<<zero<<endl;
	return 0;
}
