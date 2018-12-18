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
	set<int> s;
	map<int,int> m;
	int n,k,c=0,ans;
	cin>>n>>k;
	int arr[n];
	lp(n)
	{
		cin>>arr[i];
		s.insert(arr[i]);
		m[arr[i]]=0;
	}
	lp(n)
		m[arr[i]]++;
	for(auto it:s)
		c=max(c,m[it]);
	ans=ceil((float(c))/(float(k)))*k*s.size()-n;
	cout<<ans<<endl;
	return 0;
}