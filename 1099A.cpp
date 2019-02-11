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
	int w,h,u1,d1,u2,d2;
	cin>>w>>h;
	cin>>u1>>d1;
	cin>>u2>>d2;
	while(h>=0)
	{
		w+=h;
		if(h==d1)
			w-=u1;
		if(h==d2)
			w-=u2;
		w=max(w,0);
		h--;
	}
	cout<<w<<endl;
	return 0;
}
