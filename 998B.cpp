#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
const ll d=1e9+7;
#define pb push_back
#define mp make_pair
#define sz(a) (ll)a.size()
#define inst(a) insert(a)
#define f first
#define s second
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lpr(i,start,end,val) for(i=start;i>=end;i-=val)
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,b,i;
	cin>>n>>b;
	ll arr[n];
	lp(i,n)
		cin>>arr[i];
	ll odd=0,even=0;
	std::vector<ll> v;
	lp(i,n-1)
	{
		if(arr[i]%2)
			even++;
		else
			odd++;
		if(even==odd)
			v.pb(abs(arr[i]-arr[i+1]));
	}
	if(sz(v)==0ll)
	{
		cout<<"0\n";
		return 0;
	}
	sort(v.begin(), v.end());
	ll ans=0,val=0;
	for(i=0;i<sz(v);i++)
	{
		val+=v[i];
		if(val>b)
			break;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}