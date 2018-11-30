#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(int i=s;i>=e;i--)
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
		ll l,r;
		cin>>l>>r;
		ll sum=((r-l+1)*(r+l))/2;
		if(l%2==0)
			l++;
		if(r%2==0)
			r--;
		ll n=((r-l)/2)+1;
		// cout<<n<<" "<<(n)*(l+r)<<" "<<sum<<" ";
		sum-=(n)*(l+r);
		cout<<sum<<endl;
	}
	return 0;
}