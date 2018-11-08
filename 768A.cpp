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
set<ll> s;
map<ll,ll> m;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,c=0;
	cin>>n;
	ll arr[n];
	lp(i,n)
	{
		cin>>arr[i];
		s.insert(arr[i]);
		m[arr[i]]=0;
	}
	lp(i,n)
		m[arr[i]]++;
	if(s.size()<=2)
	{
		cout<<"0\n";
		return 0;
	}
	ll a[s.size()];
	for(set<ll>::iterator it=s.begin();it!=s.end();it++)
		a[c++]=*it;
	ll ans=0;
	n=s.size();
	lpi(i,1,n-2,1)
	{
		if(a[i]>a[i-1] && a[i+1]>a[i])
			ans+=m[a[i]];
	}
	cout<<ans<<endl;
	return 0;
}