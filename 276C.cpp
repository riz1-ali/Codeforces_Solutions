#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
#define lpi(i,s,e) for(int i=s;i<=e;i++)
#define lpr(i,s,e) for(int i=s,i>=e;i--)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,q,l,r;
	cin>>n>>q;
	ll a,query1[n+2];
	vector<ll> arr;
	vector<pair<ll,ll> > pos;
	lpi(i,1,n)
	{
		cin>>a;
		arr.pb(a);
		query1[i]=0;
	}
	sort(arr.begin(),arr.end());
	vector<pair<ll,ll> > store;
	lp(q)
	{
		cin>>l>>r;
		store.pb(mp(l,r));
		query1[l]++;
		query1[r+1]--;
	}
	ll cur=0;
	lpi(i,1,n)
	{
		cur+=query1[i];
		pos.pb(mp(cur,i));
	}
	sort(pos.begin(),pos.end());
	ll final[n+1];
	lp(n)
		final[pos[i].s]=arr[i];
	ll ans=0;
	ll pre[n+1];
	pre[0]=0;
	lpi(i,1,n)
	{
		if(i==1)
		{
			pre[i]=final[i];
			continue;
		}
		pre[i]=pre[i-1]+final[i];
	}
	lp(q)
		ans+=pre[store[i].s]-pre[store[i].f-1];
	cout<<ans<<endl;
	return 0;
}