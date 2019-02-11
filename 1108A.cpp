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
	int q;
	cin>>q;
	while(q--)
	{
		ll l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		if(((l1+r1)/2)!=((l2+r2)/2))
			cout<<((l1+r1)/2)<<" "<<((l2+r2)/2)<<endl;
		else
		{
			if(l1<=l2 and r2<=r1)
				cout<<l1<<" "<<r2<<endl;
			else if(l2<=l1 and r1<=r2)
				cout<<r1<<" "<<l2<<endl;	
		}
	}
	return 0;
}
