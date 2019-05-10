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
	ll n;
	cin>>n;
	map<ll,ll> m;
	ll arr[n];
	lp(n)
	{
		cin>>arr[i];
		m[arr[i]]=0;
	}
	lp(n)
		m[arr[i]]++;
	ll maxc=-1,maxce=-1,maxp=-1;
	lp(n)
		if(m[arr[i]]>maxc)
		{
			maxc=m[arr[i]];
			maxce=arr[i];
			maxp=i;
		}
	cout<<n-maxc<<endl;
	ll l=maxp,r=maxp;
	while(l>=0)
	{
		if(arr[l]==maxce)
		{
			l--;
			continue;
		}
		if(arr[l]<maxce)
			cout<<"1 ";
		else
			cout<<"2 ";
		cout<<l+1<<" "<<l+2<<endl;
		l--;
	}
	while(r<=n-1)
	{

		if(arr[r]==maxce)
		{
			r++;
			continue;
		}
		if(arr[r]<maxce)
			cout<<"1 ";
		else
			cout<<"2 ";
		cout<<r+1<<" "<<r<<endl;
		r++;
	}
	return 0;
}
