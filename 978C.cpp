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
	ll n,q,a,sum=0;
	cin>>n>>q;
	ll arr[n],culs[n];
	set<pair<ll,ll> > s;
	set<pair<ll,ll> >::iterator it;
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
		culs[i]=sum;
		s.insert(mp(sum,i+1));
	}
	while(q--)
	{
		cin>>a;
		it=s.lower_bound({a,0});
		if(it->s == 1)
			cout<<"1 "<<a<<endl;
		else
			cout<<it->s<<" "<<a-culs[it->s-2]<<endl;
	}
	return 0;
}