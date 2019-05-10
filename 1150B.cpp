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
	ll n;
	cin>>n;
	string mat[n];
	lp(n)
		cin>>mat[i];
	lp(n-2)
		for(ll j=1;j<n-1;j++)
			if(mat[i][j]=='.' and mat[i+1][j]=='.' and mat[i+2][j]=='.' and mat[i+1][j-1]=='.' and mat[i+1][j+1]=='.')
				mat[i][j]=mat[i+1][j]=mat[i+2][j]=mat[i+1][j-1]=mat[i+1][j+1]='#';
	lp(n)
		for(ll j=0;j<n;j++)
			if(mat[i][j]=='.')
			{
				cout<<"NO\n";
				return 0;
			}
	cout<<"YES\n";
	return 0;
}
