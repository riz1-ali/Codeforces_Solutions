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
	cout<<fixed<<setprecision(10);
	ll n,k,m,dm;
	cin>>n>>k>>m;
	dm=m;
	ld arr[n],sum=0,ans,ele=n,rem=0;
	bool trav[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		trav[i]=1;
	}
	sort(arr,arr+n);
	for(ll i=0;i<n;i++)
	{
		ld avg=(sum+(min(ele*k,(ld)m)))/ele;
		sum-=arr[i];
		ele-=1;
		m-=1;
		ld new_avg = (sum+(min(ele*k,(ld)m)))/ele;
		if(new_avg>avg)
		{
			rem++;
			trav[i]=0;
		}
		else
		{
			sum+=arr[i];
			ele+=1;
			m+=1;
		}
		if(!m)
			break;
	}
	sum=0,ele=0;
	for(ll i=0;i<n;i++)
		if(trav[i])
			sum+=arr[i],ele++;
	dm-=rem;
	ans = (sum+min(ele*k,(ld)dm))/ele;
	cout<<ans<<endl;
	return 0;
}
