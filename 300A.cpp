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
	int x,a;
	cin>>x;
	vector<int> p,n,z;
	lp(x)
	{
		cin>>a;
		if(!a)
			z.pb(a);
		else if(a>0)
			p.pb(a);
		else
			n.pb(a);
	}
	if(p.size()==0)
	{
		for(int i=n.size()-1;i>n.size()-3;i--)
			p.pb(n[i]);
		reverse(n.begin(),n.end());
		n.erase(n.begin(),n.begin()+2);
	}
	if(n.size()%2==0)
	{
		z.pb(n[0]);
		n.erase(n.begin(),n.begin()+1);	
	}
	cout<<n.size()<<" ";
	for(auto it:n)
		cout<<it<<" ";
	cout<<endl;
	cout<<p.size()<<" ";
	for(auto it:p)
		cout<<it<<" ";
	cout<<endl;
	cout<<z.size()<<" ";
	for(auto it:z)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}