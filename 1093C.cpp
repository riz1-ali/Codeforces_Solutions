#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
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
	ll n;
	cin>>n;
	ll arr[n],d2[n];
	lp(n)
		arr[i]=d2[i]=0;
	for(ll i=0;i<n/2;i++)
		cin>>d2[i];
	ll diff=0;
	arr[0]=d2[0];
	for(ll i=1;i<n/2;i++)
	{
		diff=d2[i]-d2[i-1];
		arr[i]=arr[i-1];
		arr[n-1-i]=arr[n-i];
		if(diff<0)
			arr[i]+=diff;
		else
			arr[n-1-i]+=diff;
	}
	reverse(arr,arr+n);
	lp(n)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}