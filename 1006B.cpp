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
bool comp(pll a,pll b)
{
	if(a.f!=b.f)
		return a.f<b.f;
	else
		return a.s<b.s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,i;
	cin>>n>>k;
	ll arr[n];
	bool element[n];
	vector<pll> p;
	lp(i,n)
	{
		cin>>arr[i];
		element[i]=0;
		p.pb(mp(arr[i],i));
	}
	sort(p.begin(),p.end(),comp);
	reverse(p.begin(),p.end());
	ll profit=0;
	ll index[k];
	ll ans[k];
	lp(i,k)
	{
		profit+=p[i].f;
		element[p[i].s]=1;
		index[i]=p[i].s;
	}
	ll left,right;
	vector<pll> solve;
	lp(i,k)
	{
		ans[i]=1;
		left=index[i]-1;
		right=index[i]+1;
		while(left>=0 && !element[left])
		{
			ans[i]++;
			element[left--]=1;
		}
		while(right<=n-1 && !element[right])
		{
			ans[i]++;
			element[right++]=1;
		}
		solve.pb(mp(index[i],ans[i]));
	}
	sort(solve.begin(),solve.end());
	cout<<profit<<endl;
	lp(i,k)
		cout<<solve[i].s<<" ";
	cout<<endl;
	return 0;
}