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
ll solve(string s)
{
	ll cost=0,val;
	val=abs(s[0]-'A');
	cost+=min(val,26-val);
	val=abs(s[1]-'C');
	cost+=min(val,26-val);
	val=abs(s[2]-'T');
	cost+=min(val,26-val);
	val=abs(s[3]-'G');
	cost+=min(val,26-val);
	return cost;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,ans=1e18;
	cin>>n;
	string s;
	cin>>s;
	for(ll i=0;i<=n-4;i++)
	{
		string temp;
		for(ll j=i;j<i+4;j++)
			temp+=s[j];
		ans=min(ans,solve(temp));
	}
	cout<<ans<<endl;
	return 0;
}
