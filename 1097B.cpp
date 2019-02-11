#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int n,arr[20];
bool trav=0;
void rec(int l,int curs)
{
	if(l>=n || trav)
		return;
	if(l==n-1)
	{
		if((curs+arr[l])%360==0 || (curs-arr[l])%360==0)
		{
			trav=1;
			return;
		}
	}
	rec(l+1,curs+arr[l]);
	rec(l+1,curs-arr[l]);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	lp(n)
		cin>>arr[i];
	rec(0,0);
	if(trav)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
