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
	int n;
	cin>>n;
	int arr[n+1],ans[n+1];
	vector<ll> type[n+1];
	multiset<pll> ms;
	lpi(i,1,n)
	{
		cin>>arr[i];
		ms.insert(mp(n-arr[i],i));	
		ans[i]=0;
	}
	ll ptr=0;
	while(!ms.empty())
	{
		ptr++;
		auto it=*(ms.begin());
		ll yy=it.f-1,zz;
		zz=it.f;
		type[ptr].pb(it.s);
		ms.erase(it);
		lpi(i,1,yy)
		{
			auto itx=ms.lower_bound({zz,0});
			ll yz=itx->s;
			if(itx==ms.end() || itx->f!=zz)
			{
				cout<<"Impossible\n";
				return 0;
			}
			type[ptr].pb(yz);
			ms.erase(itx);
		}
	}
	lpi(i,1,n)
		for(auto it:type[i])
			ans[it]=i;
	cout<<"Possible\n";
	lpi(i,1,n)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}

