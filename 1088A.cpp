#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
	int x;
	cin>>x;
	lpi(i,1,100)
	{
		lpi(j,1,100)
		{
			int a=i,b=j;
			if(!(a%b) && a*b>x && (a/b)<x)
			{
				cout<<a<<" "<<b<<endl;
				return 0;
			}
		}
	}
	cout<<"-1\n";
	return 0;
}