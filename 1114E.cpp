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
mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());
set<ll> avail;
ll querc=0;
bool check(ll val)
{
	querc++;
	if(querc>60)
		exit(0);
	cout<<"> "<<val<<endl;
	ll res;
	cin>>res;
	return res;
}
ll binarys(ll start,ll end)
{
	ll mid;
	while(start<end)
	{
		mid=(start+end)/2;
		if(check(mid))
			start=mid+1;
		else
			end=mid;
	}
	return start;
}
void solve(ll bigg,ll n)
{
	ll a,d,cur=1;
	vector<ll> vals;
	while(querc<60 and !avail.empty())
	{
		querc++;
		cur=((rng32()%n)+1);
		cout<<"? "<<cur<<endl;
		cin>>a;
		if(avail.find(cur)!=avail.end())
		{
			vals.pb(a);
			avail.erase(cur);
		}
	}
	sort(vals.begin(),vals.end());
	if(vals[vals.size()-1]!=bigg)
		vals.pb(bigg);
	d=vals[1]-vals[0];
	for(ll i=1;i<vals.size();i++)
		d=gcd(d,vals[i]-vals[i-1]);
	a=bigg-(n-1)*d;
	cout<<"! "<<a<<" "<<d<<endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	lp(n)
		avail.insert(i+1);
	ll grt=binarys(1,1e9);
	solve(grt,n);
	return 0;
}
