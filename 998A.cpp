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
	ll n,i,a;
	cin>>n;
	vector<pair<ll,ll> > p;
	lp(i,n)
	{
		cin>>a;
		p.pb(mp(a,i+1));
	}
	if(n==1 || (n==2 && p[0].f==p[1].f))
	{
		cout<<"-1\n";
		return 0;
	}
	sort(p.begin(),p.end());
	cout<<"1\n";
	cout<<p[0].s<<endl;
	return 0;
}