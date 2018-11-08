#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
const ll d=1e9+7;
#define pb push_back
#define mp make_pair
#define sz(a) (ll)a.size()
#define inst(a) insert(a)
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
	ll n,i;
	cin>>n;
	ll arr[n];
	bool trav[n];
	lp(i,n)
	{
		trav[i]=0;
		cin>>arr[i];
	}
	ll left=0,right=n-1,sum_left=0,sum_right=0,sum=0;
	while(left<right)
	{
		if(!trav[left])
		{
			trav[left]=1;
			sum_left+=arr[left];
		}
		if(!trav[right])
		{
			trav[right]=1;
			sum_right+=arr[right];
		}
		if(sum_left==sum_right)
		{
			sum=max(sum,sum_left);
			left++;
		}
		else
		{
			if(sum_left<sum_right)
				left++;
			else
				right--;
		}
	}
	cout<<max(sum,0ll)<<endl;
	return 0;
}