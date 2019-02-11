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
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	set<int> two;
	int p=1;
	for(int i=1;i<=25;i++)
	{
		p*=2;
		two.insert(p-1);
	}
	int q;
	cin>>q;
	while(q--)
	{
		int n,nn=0,k,it=0;
		cin>>n;
		k=n;
		while(k)
		{
			if(k%2==0)
			{
				it=1;
				break;
			}
			k/=2;
		}
		if(it)
		{
			auto ite=*(two.upper_bound({n}));
			cout<<ite<<endl;
		}
		else
		{
			set<int> fact;
			for(int i=1;i*i<=n;i++)
			{
				if(n%i==0)
				{
					fact.insert(i);
					fact.insert(n/i);
				}
			}
			int ans=0;
			for(auto itx : fact)
			{
				if(itx>=n)
					break;
				int b=n&itx,c=n^itx;
				ans=max(ans,gcd(c,b));
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
