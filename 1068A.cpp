#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,k,l;
	cin>>n>>m>>k>>l;
	if(k+l>n)
	{
		cout<<"-1\n";
		return 0;
	}
	ll ans=(k+l+m-1)/m;
	if(ans*m<=n)
		cout<<ans<<endl;
	else
		cout<<"-1\n";
	return 0;
}