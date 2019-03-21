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
vector<int> arr;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,med,pres=0,a;
	cin>>n>>med;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.pb(a);
		if(a==med)
			pres=1;
	}
	int ans=0;
	if(pres==0)
	{
		arr.pb(med);
		n++;
		ans++;
	}
	sort(arr.begin(),arr.end());
	while(arr[((n-1)/2)]!=med)
	{
		if(arr[(n-1)/2] > med)
			arr.pb(-1);
		else
			arr.pb(1000000);
		n++;
		ans++;
		sort(arr.begin(),arr.end());
	}
	cout<<ans<<endl;
	return 0;
}