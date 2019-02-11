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
	string s;
	cin>>s;
	int cost=0;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
		{
			if(s[i]=='R')
			{
				if(i+2<=n-1)
				{
					cost++;
					if(s[i+2]=='B')
						s[i+1]='G';
					else
						s[i+1]='B';
				}
				else
				{
					cost++;
					s[i+1]='B';
				}
			}
			else if(s[i]=='G')
			{
				if(i+2<=n-1)
				{
					cost++;
					if(s[i+2]=='B')
						s[i+1]='R';
					else
						s[i+1]='B';
				}
				else
				{
					cost++;
					s[i+1]='R';
				}
			}
			else
			{
				if(i+2<=n-1)
				{
					cost++;
					if(s[i+2]=='G')
						s[i+1]='R';
					else
						s[i+1]='G';
				}
				else
				{
					cost++;
					s[i+1]='G';
				}
			}
		}
	}
	cout<<cost<<endl<<s<<endl;
	return 0;
}
