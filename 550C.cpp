#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	int n=s.size();
	lp(n)
		if((s[i]-'0')%8==0)
		{
			cout<<"YES\n"<<s[i]<<endl;
			return 0;
		}
	lp(n)
	{
		lpi(j,i+1,n-1)
		{
			int num=(s[i]-'0')*10+(s[j]-'0');
			if(num%8==0)
			{
				cout<<"YES\n"<<num<<endl;
				return 0;
			}
		}
	}
	lp(n)
	{
		lpi(j,i+1,n-1)
		{
			lpi(k,j+1,n-1)
			{
				int num=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
				if(num%8==0)
				{
					cout<<"YES\n"<<num<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO\n";
	return 0;
}