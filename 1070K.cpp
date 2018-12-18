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
	int n,k,sum=0,c=0;
	cin>>n>>k;
	int arr[n];
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum%k!=0)
	{
		cout<<"No\n";
		return 0;
	}
	int t=sum/k;
	sum=0;
	vector<int> ele;
	lp(n)
	{
		sum+=arr[i];
		c++;
		if(sum==t)
		{
			sum=0;
			ele.pb(c);
			c=0;
		}
	}
	if(ele.size()==0)
	{
		cout<<"No\n";
		return 0;
	}
	cout<<"Yes\n";
	for(auto it:ele)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}