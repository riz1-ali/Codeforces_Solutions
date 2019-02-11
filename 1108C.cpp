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
pair<int,string> func(string a,int n,string b,int m)
{
	int cost=0;
	for(int i=0;i<=n-m;i++)
	{
		if(a.substr(i,m)!=b)
		{
			for(int j=0;j<m;j++)
			{
				if(b[j]!=a[i+j])
				{
					cost++;
					a[i+j]=b[j];
				}
			}
		}
		char x=b[0];
		for(int j=0;j<m-1;j++)
			b[j]=b[j+1];
		b[m-1]=x;
	}
	return mp(cost,a);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n==1)
	{
		cout<<"0\n";
		cout<<s<<endl;
		return 0;
	}
	if(n==2)
	{
		vector< pair<int,string> > v;
		v.pb(func(s,n,"RG",2));	
		v.pb(func(s,n,"RB",2));
		v.pb(func(s,n,"GR",2));	
		v.pb(func(s,n,"GB",2));
		v.pb(func(s,n,"BR",2));	
		v.pb(func(s,n,"BG",2));	
		sort(v.begin(),v.end());
		cout<<v[0].f<<endl<<v[0].s<<endl;
		return 0;
	}
	vector< pair<int,string> > v;
	v.pb(func(s,n,"RGB",3));
	v.pb(func(s,n,"RBG",3));
	v.pb(func(s,n,"BGR",3));
	v.pb(func(s,n,"BRG",3));
	v.pb(func(s,n,"GBR",3));
	v.pb(func(s,n,"GRB",3));
	sort(v.begin(),v.end());
	cout<<v[0].f<<endl<<v[0].s<<endl;
	return 0;
}
