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
	ll i,n,a,b,j,m;
	cin>>n>>m;
	set<ll> s;
	lpi(i,1,m,1)
		s.insert(i);
	lp(i,n)
	{
		cin>>a>>b;
		lpi(j,a,b,1)
			s.erase(j);
	}
	cout<<s.size()<<endl;
	for(set<ll>::iterator it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}