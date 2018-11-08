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
	string s[2];
	cin>>s[0]>>s[1];
	int i,k,ans=0,temp=0,tempo=0;
	lp(i,s[0].size())
	{
		temp=0;
		if(s[0][i]=='0')
			temp++;
		if(s[1][i]=='0')
			temp++;
		tempo+=temp;
		if(tempo>=3)
		{
			ans++;
			tempo-=3;
		}
		else
			tempo=temp;
	}
	cout<<ans<<endl;
	return 0;
}