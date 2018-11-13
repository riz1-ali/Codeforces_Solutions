#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,a,ct=0,cf=0;
	cin>>n;
	lp(n)
	{
		cin>>a;
		if(a==25)
		{
			ct+=25;
			continue;
		}
		if(a==50)
		{
			if(ct<25)
			{
				cout<<"NO\n";
				return 0;
			}
			ct-=25;
			cf+=50;
			continue;
		}
		if(a==100)
		{
			if(ct>=25 && cf>=50)
			{
				ct-=25;
				cf-=50;
				continue;
			}
			if(ct>=75)
			{
				ct-=75;
				continue;
			}
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}