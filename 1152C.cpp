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
ll ceils(ll a,ll b)
{
	if(a%b==0)
		return a/b;
	return (a/b)+1;
}
struct comp{
	bool operator()(ll a,ll b)
	{
		return a>b;
	}
};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll a,b;
	cin>>a>>b;
	ll curg=gcd(a,b);
	if((((a*b)/curg)==a or ((a*b)/curg)==b) or abs(a-b)==1)
	{
		cout<<"0\n";
		return 0;
	}
	ll diff=abs(a-b);
	ll c=min(a,b),d=max(a,b);
	ll x=ceils(c,diff);
	ll x1=diff*x,x2=diff*(x+1);
	ll m1=x1-c;
	set<ll> fact;
	for(ll i=1;i*i<=diff;i++)
		if(diff%i==0)
		{
			fact.insert(i);
			fact.insert(diff/i);
		}
	vector<ll> facts;
	for(auto it:fact)
		facts.pb(it);
	if(lower_bound(facts.begin(),facts.end(),c)==facts.end())
	{
		cout<<m1<<endl;
		return 0;
	}
	ll val=facts[lower_bound(facts.begin(),facts.end(),c)-facts.begin()];
	cout<<val-c<<endl;
	return 0;
}
