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
#define all(v) v.begin(),v.end()
set<ll> reps;
ll rem(ll n)
{
	while(n%10==0 and n!=0)
		n/=10;
	return n;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	while(reps.find(n)==reps.end())
	{
		reps.insert(n);
		n++;
		n=rem(n);
		// cout<<n<<endl;
	}
	cout<<reps.size()<<endl;
	return 0;
}
