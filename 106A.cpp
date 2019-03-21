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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,f=0;
	cin>>n;
	string ans;
	while(n)
	{
		if(n%7==0)
		{
			ans+="7";
			n-=7;
		}
		else if(n%4==0)
		{
			ans+="4";
			n-=4;
		}
		else if(n>7)
		{
			ans+="7";
			n-=7;
		}
		else
		{
			ans+=n+'0';
			if(n!=4)
				f=1;
			n=0;
		}
	}
	if(f)
	{
		cout<<"-1\n";
		return 0;
	}
	sort(ans.begin(),ans.end());
	cout<<ans<<endl;
	return 0;
}