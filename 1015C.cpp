#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
const ll d=1e9+7;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lpr(i,start,end,val) for(i=start;i>=end;i-=val)
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,a,b,i,sum=0,ans=0;
	cin>>n>>k;
	ll arr[n];
	lp(i,n)
	{
		cin>>a>>b;
		sum+=a;
		arr[i]=a-b;
	}
	if(sum<=k)
	{
		cout<<"0\n";
		return 0;
	}
	sort(arr,arr+n);
	reverse(arr,arr+n);
	i=0;
	while(sum>k && i<n)
	{
		sum-=arr[i];
		ans++;
		i++;
	}
	if(sum<=k)
	{
		cout<<ans<<endl;
		return 0;
	}
	cout<<"-1\n";
	return 0;
}