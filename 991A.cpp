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
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	if(n-a-b+c<=0 || n<a || n<b || c>a || c>b)
	{
		cout<<"-1\n";
		return 0;
	}
	cout<<n-a-b+c<<endl;
	return 0;
}