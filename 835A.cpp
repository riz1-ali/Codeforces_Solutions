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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	if((s*v1)+(2*t1)<(s*v2)+(2*t2))
		cout<<"First\n";
	else if((s*v1)+(2*t1)==(s*v2)+(2*t2))
		cout<<"Friendship\n";
	else
		cout<<"Second\n";
	return 0;
}
