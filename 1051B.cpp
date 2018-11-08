#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
int main()
{
	ll l,r;
	cin>>l>>r;
	ll p=(r-l+1)/2;
	set<ll> odd,even;
	for(ll i=l;i<=r;i++)
	{
		if(i%2)
			odd.insert(i);
		else
			even.insert(i);
	}
	vector<ll> o,e;
	for(set<ll>::iterator it=odd.begin();it!=odd.end();it++)
		o.pb(*it);
	for(set<ll>::iterator it=even.begin();it!=even.end();it++)
		e.pb(*it);
	cout<<"YES\n";
	for(ll i=0;i<p;i++)
		cout<<o[i]<<" "<<e[i]<<endl;
	return 0;
}