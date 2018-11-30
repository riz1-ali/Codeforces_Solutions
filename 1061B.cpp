#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(int i=s;i>=e;i--)
#define lpi(i,s,e) for(int i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,x,sum=0;
	cin>>n>>x;
	ll arr[n];
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(n==1)
	{
		cout<<"0\n";
		return 0;
	}
	sort(arr,arr+n);
	ll solve[n];
	lp(n)
		solve[i]=0;
	ll h=arr[n-1];
	lpr(i,n-1,0)
	{
		if(i==0)
		{
			if(h>0)
				solve[i]=min(h,arr[i]);
			else
				solve[i]=1;
			break;
		}
		if(arr[i]==arr[i-1])
		{
			solve[i]=1;
			h-=solve[i];
		}
		else
		{
			solve[i]=max(h-arr[i-1],1ll);
			h-=solve[i];
		}
	}
	lp(n)
		sum-=solve[i];
	cout<<sum<<endl;
	return 0;
}