#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
bool comp(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,t;
	cin>>n>>t;
	deque<pair<ll,ll> > dq;
	ll arr[n],sum=0,mini=1e18,c=0;
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
		mini=min(mini,arr[i]);
		dq.pb(mp(arr[i],i));
	}
	sort(dq.begin(),dq.end());
	while(t>=mini)
	{
		while(sum>t)
		{
			if(dq.back().f<=t)
				break;
			sum-=dq.back().f;
			dq.pop_back();
		}
		ll var=t/sum;
		t-=var*sum;
		c+=var*dq.size();
		// cout<<var<<" "<<t<<" "<<sum<<" "<<c<<" "<<dq.size()<<endl;
		vector<pair<ll,ll> > v;
		for(deque<pair<ll,ll> >::iterator it=dq.begin();it!=dq.end();it++)
			v.pb(*it);
		sort(v.begin(),v.end(),comp);
		// for(int i=0;i<v.size();i++)
		// 	cout<<v[i].f<<" ";
		// cout<<endl;
		for(int i=0;i<v.size();i++)
		{
			if(v[i].f<=t)
			{
				t-=v[i].f;
				c++;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}