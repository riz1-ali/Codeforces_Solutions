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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cout<<fixed<<setprecision(10);
	ld n,R;
	cin>>n>>R;
	ld ang=sin((ld)(3.14159265358979323846/n));
	ld ans=(R*ang)/(1-ang);
	cout<<ans<<endl;
	return 0;
}
