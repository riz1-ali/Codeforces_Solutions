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
int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll max_d=-1,d;
		ll pos=1;
		cout<<"1 "<<n-1<<" "<<pos<<" ";
		vector<ll> act;
		for(ll j=1;j<=n;j++)
			if(pos==j)
				continue;
			else
			{
				cout<<j<<" ";
				act.pb(j);
			}
		cout<<endl;
		cin>>d;
		max_d=max(max_d,d);
		ll ti=7;
		while(ti-- and act.size()>1)
		{
			vector<ll> left,right;
			for(ll i=0;i<act.size()/2;i++)
				left.pb(act[i]);
			for(ll i=act.size()/2;i<act.size();i++)
				right.pb(act[i]);
			cout<<"1 "<<right.size()<<" 1 ";
			for(auto it:right)
				cout<<it<<" ";
			cout<<endl;
			cin>>d;
			max_d=max(max_d,d);
			if(d<max_d)
				act=left;
			else
				act=right;
		}
		cout<<"1 "<<n-1<<" "<<act[0]<<" ";
		for(ll j=1;j<=n;j++)
			if(act[0]==j)
				continue;
			else
				cout<<j<<" ";
		cout<<endl;
		cin>>d;
		max_d=max(max_d,d);
		cout<<"-1 "<<max_d<<endl;
	}
	return 0;
}
