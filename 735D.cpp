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
bool check_prime(ll n)
{
	set<ll> fact;
	for(ll i=1;i*i<=n;i++)
		if(n%i==0)
		{
			fact.insert(i);
			fact.insert(n/i);
		}
	fact.erase(1);
	return fact.size()==1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	if(check_prime(n))
	{
		cout<<"1\n";
		return 0;
	}
	if(!(n%2) || check_prime(n-2))
		cout<<"2\n";
	else
		cout<<"3\n";
	return 0;
}
