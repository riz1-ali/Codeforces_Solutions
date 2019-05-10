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
bool invalid(ll arr[],ll n)
{
	ll checkv;
	lp(n)
	{
		if(!i)
			continue;
		checkv=arr[i-1];
		if(2*checkv<arr[i] or checkv+1>arr[i])
			return 1;
	}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	if(n<(k*(k+1)/2))
	{
		cout<<"NO\n";
		return 0;
	}
	ll solve[k],sum=n;
	lp(k)
	{
		solve[i]=i+1;
		sum-=i+1;
	}
	ll prevs=-1,c=0;
	while(sum!=0)
	{
		ll pos=k-1;
		ll val_bat=sum/k;
		while(sum>0 and val_bat!=0)
		{
			solve[pos]+=val_bat;
			pos--;
			sum-=val_bat;
			if(pos==-1)
				break;
		}
		for(ll i=k-1;i>0;i--)
		{
			ll allow_diff=2*solve[i-1]-solve[i];
			if(allow_diff==0)
				continue;
			if(sum>allow_diff)
			{
				if(i==k-1)
				{
					solve[i]+=allow_diff;
					sum-=allow_diff;
				}
				else
				{
					if(solve[i]+allow_diff>=solve[i+1])
					{
						solve[i]+=allow_diff-solve[i+1]+1;
						sum-=allow_diff-solve[i+1]+1;
					}
					else
					{
						solve[i]+=allow_diff;
						sum-=allow_diff;
					}
				}
			}
			else
			{
				if(i==k-1)
				{
					solve[i]+=sum;
					sum=0;
					break;
				}
				else
				{
					allow_diff=sum;
					if(solve[i]+allow_diff>=solve[i+1])
					{
						solve[i]+=allow_diff-solve[i+1]+1;
						sum-=allow_diff-solve[i+1]+1;
					}
					else
					{
						solve[i]+=allow_diff;
						sum-=allow_diff;
					}
					break;
				}
			}
		}
		if(prevs==-1)
			prevs=sum;
		else
			if(prevs==sum)
				c++;
		if(c==10 and sum!=0)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	if(invalid(solve,k))
	{
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	lp(k)
		cout<<solve[i]<<" ";
	cout<<endl;
	return 0;
}
