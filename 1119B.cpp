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
	ll n,h,ans=1,val=1;
	cin>>n>>h;
	ll arr[n];
	lp(n)
		cin>>arr[i];
	if(n==1)
	{
		cout<<"1\n";
		return 0;
	}
	vector<ll>temp;
	lp(n)
	{
		temp.pb(arr[i]);
		sort(temp.begin(),temp.end(),greater<ll>());
		ll mx=0,tans=0,parts=0;
		for(ll j=0;j<temp.size();j+=2)
		{
			parts+=temp[j];
			// cout<<i<<" "<<j<<" - "<<parts<<endl;
			if(parts<=h)
			{
				if(j+1<temp.size())
					tans+=2;
				else
				{
					tans++;
					break;
				}
			}
			else
			{
				parts-=temp[j];
				if(j+1<temp.size())
				{
					parts+=temp[j+1];
					if(parts<h)
						tans++;
					else
						break;
				}
				else
					break;
			}
		}
		// cout<<i<<" "<<tans<<endl;
		if(tans>ans)
		{
			ans=tans;
			val=i+1;
		}
		if(tans!=temp.size())
			break;
	}
	cout<<val<<endl;
	return 0;
}
