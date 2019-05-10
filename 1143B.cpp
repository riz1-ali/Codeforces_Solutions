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
ll product(ll x) 
{ 
	ll prod = 1; 
	while (x) { 
		prod *= (x % 10); 
		x /= 10; 
	} 
	return prod; 
} 
ll solve(ll l, ll r) 
{ 
	string a = to_string(l); 
	string b = to_string(r); 
	ll ans = r; 
	for (ll i = 0; i < b.size(); i++)
	{ 
		if (b[i] == '0') 
			continue; 
		string curr = b; 
		curr[i] = ((curr[i] - '0') - 1) + '0'; 

		for (ll j = i + 1; j < curr.size(); j++) 
			curr[j] = '9'; 

		ll num = 0; 
		for (auto c : curr) 
			num = num * 10 + (c - '0'); 

		if (num >= l && product(ans) < product(num)) 
			ans = num; 
	} 
	ll k=ans,val=1;
	while(k)
	{
		val=val*(k%10);
		k/=10;
	}
	return val;
}
int main() 
{
	ll n;
	cin>>n;
	cout<<solve(1ll,n)<<endl;
	return 0; 
}
