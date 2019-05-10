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
#define all(v) v.begin(),v.end()
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll k;
	cin>>k;
	string s1,s2;
	cin>>s1>>s2;
	vector<ll> n1,n2;
	lp(k)
		n1.pb((ll)(s1[i]-'a'));
	lp(k)
		n2.pb((ll)(s2[i]-'a'));
	vector<ll> sum;
	sum.pb(0);
	lp(k)
		sum.pb(n1[i]+n2[i]);
	for(ll i=k;i>0;i--)
	{
		sum[i-1]+=sum[i]/26;
		sum[i]%=26;
	}
	for(ll i=0;i<=k;i++)
	{
		ll rem=sum[i]%2;
		sum[i]/=2;
		if(i<k and rem>0)
			sum[i+1]+=rem*26;
	}
	for(ll i=1;i<=k;i++)
		cout<<(char)('a'+sum[i]);
	cout<<endl;
	return 0;
}
