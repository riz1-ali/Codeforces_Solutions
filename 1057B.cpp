#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	lp(n)
		cin>>arr[i];
	ll ans=0,sum;
	lp(n)
	{
		sum=0;
		lpi(j,i,n-1)
		{
			sum+=arr[j];
			if(sum>(j-i+1)*100)
				ans=max(ans,j-i+1);
		}
	}
	cout<<ans<<endl;
	return 0;
}