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
	int n;
	cin>>n;
	string mat[n];
	for(int i=0;i<n;i++)
		cin>>mat[i];
	int ans=0;
	for(int i=1;i<=n-2;i++)
		for(int j=1;j<=n-2;j++)
			if(mat[i][j]=='X' and mat[i-1][j-1]=='X' and mat[i+1][j-1]=='X' and mat[i-1][j+1]=='X' and mat[i+1][j+1]=='X')
				ans++;
	cout<<ans<<endl;
	return 0;
}
