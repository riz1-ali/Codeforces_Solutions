#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	int n,a,b;
	cin>>n;
	vector<pair<int,int> > v;
	lp(n)
	{
		cin>>a>>b;
		v.pb(mp(a,b));
	}
	ll sum=0,x=0,y=0;
	lp(n)
	{
		if(v[i].f+v[i].s>sum)
		{
			x=v[i].f;
			y=v[i].s;
			sum=x+y;
		}
	}
	cout<<sum<<endl;
	return 0;
}