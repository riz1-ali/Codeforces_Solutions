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
#define all(v) v.begin(),v.end()
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	ll ans=0;
	ll unic[11];
	lp(11)
		unic[i]=0;
	bool flag;
	set<ll> trav;
	lp(n)
	{
		flag=1;
		trav.insert(arr[i]);
		unic[arr[i]]++;
		set<ll> occur;
		for(auto j:trav)
			if(unic[j]!=0)
				occur.insert(unic[j]);
		if(occur.size()==1)
		{
			if(trav.size()>=2 and *occur.begin()!=1)
				flag=0;
		}
		else if(occur.size()==2)
		{
			ll c1=0,c2=0,ele1=-1,ele2=-1;
			for(auto j:trav)
				if(unic[j]==*occur.begin())
				{
					ele1=unic[j];
					c1++;
				}
				else
				{
					ele2=unic[j];
					c2++;
				}
			if(c1>1 and c2>1)
				flag=0;
			else
			{
				if(c2==1)
				{
					if(ele2-1>ele1)
						flag=0;
				}
				else
				{
					if(ele1-1<ele2 and ele1>1)
						flag=0;
				}
			}
		}
		else if(occur.size()>2)
			flag=0;
		if(flag)
			ans=max(ans,i+1);
	}
	cout<<min(ans,n)<<endl;
	return 0;
}
