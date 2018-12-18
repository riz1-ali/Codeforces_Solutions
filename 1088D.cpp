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
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int stat,num,a=0,b=0,c,d;
	cout<<"? 0 0\n";
	cin>>stat;
	fflush(stdout);
	lpr(i,29,0)
	{
		num=1<<i;
		cout<<"? "<<(a^num)<<" "<<b<<endl;
		cin>>c;
		fflush(stdout);
		cout<<"? "<<a<<" "<<(b^num)<<endl;
		cin>>d;
		fflush(stdout);
		if(c==d)
		{
			if(stat==1)
				a+=num;
			else
				b+=num;
			stat=c;
		}
		else
		{
			if(d==1)
			{
				a+=num;
				b+=num;
			}
		}
	}
	cout<<"! "<<a<<" "<<b<<endl;
	fflush(stdout);
	return 0;
}