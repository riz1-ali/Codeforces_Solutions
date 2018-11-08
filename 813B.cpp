#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
int main()
{
	vector<ll> a,b;
	set<ll> s;
	ll x,y,l,r;
	cin>>x>>y>>l>>r;
	ll temp=1;
	while(1)
	{
		a.pb(temp);
		if((ll)temp>((1e18)/x))
			break;
		temp=temp*x;
	}
	temp=1;
	while(1)
	{
		b.pb(temp);
		if((ll)temp>(ll)((1e18)/y))
			break;
		temp=temp*y;
	}
	int i,j;
	for(i=0;i<a.size();i++)
	{
		for(j=0;j<b.size();j++)
		{
			if(a[i]<=(ll)(1e18)-b[j])
			{
				if(a[i]+b[j]>=l && a[i]+b[j]<=r)
					s.insert(a[i]+b[j]);
			}
		}
	}
	if(*(s.begin())>r)
	{
		cout<<r-l+1<<endl;
		return 0;
	}
	ll ans=*(s.begin())-l;
	ans=max(ans,r-*(--s.end()));
	for(auto it=s.begin();it!=--s.end();it++)
	{
		auto it1=it;
		it1++;
		ans=max(ans,*it1-*it-1);
	}
	cout<<ans<<endl;
	return 0;
}