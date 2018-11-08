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
	ll n,x,y,i;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	bool flag=0;
	ll group=0;
	lp(i,n)
	{
		if(s[i]=='0')
		{
			if(!flag)
			{
				flag=1;
				group++;
			}
		}
		else
			flag=0;
	}
	if(group==0)
	{
		cout<<"0\n";
		return 0;
	}
	cout<<(group-1)*min(x,y)+y<<endl;
	return 0;
}