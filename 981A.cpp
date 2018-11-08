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
bool check(string s)
{
	if(sz(s)==1)
		return 0;
	string t=s;
	reverse(s.begin(), s.end());
	if(t==s)
		return 0;
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	int i;
	lpr(i,s.size(),1,1)
	{
		if(check(s.substr(0,i)))
		{
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<"0\n";
	return 0;
}