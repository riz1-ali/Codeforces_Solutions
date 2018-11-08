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
bool check(ll val,ll n)
{
	ll vasya=0,petya=0,origin=n;
	while(n>0)
	{
		if(n<=val)
		{
			vasya+=n;
			break;
		}
		else
		{
			vasya+=val;
			n-=val;
			petya+=n/10;
			n-=n/10;
		}
	}
	n=origin;
	if(vasya>=n/2+n%2)
		return false;
	return true;
}
void binarys(ll n)
{
	ll start=1,mid,end=max(n/2,1ll);
	while(start<end)
	{
		mid=(start+end)/2;
		if(check(mid,n))
			start=mid+1;
		else
			end=mid;
	}
	cout<<start<<endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	binarys(n);
	return 0;
}