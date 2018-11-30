#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(int i=s;i>=e;i--)
#define lpi(i,s,e) for(int i=s;i<=e;i++)
#define lp(i,n) for(ll i=0;i<n;i++)
vector<ll> adj[100010];
int main()
{
	cout<<fixed<<setprecision(10);
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		double d,a,b;
		cin>>d;
		if(d==0)
		{
			cout<<"Y 0.000000000 0.000000000\n";
			continue;
		}
		if(d<4)
		{
			cout<<"N\n";
			continue;
		}
		double D = sqrt(double(d*d - 4*d));
		a = (d + D)/2;
		b = (d - D)/2;
		cout<<"Y "<<a<<" "<<b<<endl;
	}
	return 0;
}