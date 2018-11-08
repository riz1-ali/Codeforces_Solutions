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
	ll n,d,i;
	cin>>n>>d;
	ll arr[n];
	lp(i,n)
		cin>>arr[i];
	set<ll> s;
	lp(i,n)
	{
		if(i==0)
		{
			s.insert(arr[i]-d);
			if(arr[i+1]-(arr[i]+d)>=d)
				s.insert(arr[i]+d);
			continue;
		}
		if(i==n-1)
		{
			s.insert(arr[i]+d);
			if((arr[i]-d)-arr[i-1]>=d)
				s.insert(arr[i]-d);
			continue;
		}
		if((arr[i]-d)-arr[i-1]>=d)
			s.insert(arr[i]-d);
		if(arr[i+1]-(arr[i]+d)>=d)
			s.insert(arr[i]+d);		
	}
	cout<<s.size()<<endl;
	return 0;
}