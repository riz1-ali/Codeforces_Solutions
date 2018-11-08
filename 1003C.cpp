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
double cntr=0;
double ans=0;
void summ(ll arr[],ll n,ll k)
{
	ll i,j,ts,c;
	lpi(j,k,n,1)
	{
		ts=0;
		c=0;
		lp(i,n)
		{
			ts+=arr[i];
			c++;
			if(c==j)
			{
				// cout<<ans*c<<" "<<ts*cntr<<" "<<i<<" "<<j<<endl;
				if(ans*c<=ts*cntr)
				{
					cntr=c;
					ans=ts;
				}
				ts-=arr[i-(j-1)];
				c--;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cout<<fixed<<setprecision(10);
	ll n,k,i;
	cin>>n>>k;
	ll arr[n];
	lp(i,n)
		cin>>arr[i];
	summ(arr,n,k);
	// cout<<ans<<" "<<cntr<<endl;
	cout<<(double)(ans/cntr)<<endl;
	return 0;
}