#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1000000007;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
#define lpi(i,s,e) for(int i=s;i<=e;i++)
#define lpr(i,s,e) for(int i=s,i>=e;i--)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n,ans=1,path=0,temp_ans;
	cin>>n;
	lpi(i,1,n)
	{
		temp_ans = (path * 3) % mod;
		path = (path * 2 + ans) % mod;
		ans = temp_ans;
	}
	cout<<ans<<endl;
}