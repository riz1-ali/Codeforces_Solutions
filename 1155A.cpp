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
	ll n;
	cin>>n;
	string s;
	cin>>s;
	for(ll i=0;i<n-1;i++)
	{
		string t1;
		string t2="";
		t2+=s[i];
		t2+=s[i+1];
		t1=t2;
		reverse(t2.begin(),t2.end());
		if(t2<t1)
		{
			cout<<"YES\n"<<i+1<<" "<<i+2<<endl;
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
