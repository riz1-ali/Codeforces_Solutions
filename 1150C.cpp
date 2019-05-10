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
bool prime[1000001];
void sieve(ll n)
{
	prime[0]=prime[1]=1;
	for(ll i=2;i*i<=n;i++)
		if(!prime[i])
			for(ll j=i*i;j<=n;j+=i)
				prime[j]=1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	sieve(1e6);
	ll n,a,o=0,t=0;
	cin>>n;
	vector<ll> ans;
	lp(n)
	{
		cin>>a;
		a%2?o++:t++;
	}
	ll curs=0;
	while(n--)
	{
		if(t and !prime[curs+2])
		{
			curs+=2;
			ans.pb(2);
			t--;
			continue;
		}
		if(o and !prime[curs+1])
		{
			curs+=1;
			ans.pb(1);
			o--;
			continue;
		}
		if(curs%2)
			if(t>0)
				ans.pb(2),curs+=2,t--;
			else
				ans.pb(1),curs+=1,o--;
		else
			if(o>0)
				ans.pb(1),curs+=1,o--;
			else
				ans.pb(2),curs+=2,t--;
	}
	for(ll i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
