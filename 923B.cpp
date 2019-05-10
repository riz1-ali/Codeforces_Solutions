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
	ll arr[n],temp[n];
	lp(n)
		cin>>arr[i];
	lp(n)
		cin>>temp[i];
	ll vol,te,sumt=0;
	multiset<ll> ms;
	lp(n)
	{
		vol=0;
		te=temp[i];
		ms.insert(arr[i]+sumt);
		while(!ms.empty())
		{
			if(*ms.begin()<=sumt+te)
			{
				vol+=(*ms.begin())-sumt;
				ms.erase(ms.begin());
			}
			else
				break;
		}
		vol+=te*((ll)ms.size());
		sumt+=te;
		cout<<vol<<" ";			
	}
	cout<<endl;
	return 0;
}
