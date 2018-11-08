#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ld double
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define pll pair <ll,ll>
#define nl "\n"
bool cmp(const pll &a,const pll &b)
{
	if(a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}
int main()
{
	ios_base::sync_with_stdio(false);
	ll n,i;
	cin>>n;
	vector <pll> v;
	for(i=0;i<n;i++)
	{
		ll s,x,y,z,w;
		cin>>x>>y>>z>>w;
		s=x+y+z+w;
		v.pb(mp(s,i+1));
	}
	sort(v.begin(),v.end(),cmp);
	for(i=0;i<n;i++)
	{
		if(v[i].ss==1)
			cout<<i+1<<nl;
	}
	return 0;
}