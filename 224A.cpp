#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	ll x,y,z;
	cin>>x>>y>>z;
	cout<<4*(x*y+y*z+z*x)/pow((x*y*z),0.5)<<endl;
	return 0;
}