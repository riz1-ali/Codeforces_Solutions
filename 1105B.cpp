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
int char_c[50],cnt[50];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int ans=0;
	int x=27;
	for(int i=0;i<n;i++)
	{
		if(x!=s[i]-'a')
		{
			cnt[x]+=char_c[x]/k;
			char_c[x]=0;
		}
		x=s[i]-'a';	
		char_c[x]++;		
	}
	cnt[x]+=char_c[x]/k;
	for(int i=0;i<26;i++)
		ans=max(ans,cnt[i]);
	cout<<ans<<"\n";
	return 0;
}
