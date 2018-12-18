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
	int n;
	cin>>n;
	int arr[n],ans=0;
	set<int> prob;
	lp(n)
		cin>>arr[i];
	lpi(i,1,n-2)
		if(arr[i-1] && arr[i+1] && !arr[i])
			prob.insert(i);
	while(!prob.empty())
	{
		int x=*(prob.begin());
		prob.erase(x);
		if(arr[x-1] && arr[x+1] && !arr[x])
		{
			arr[x+1]=0;
			ans++;
		}
		else
			continue;
	}
	cout<<ans<<endl;
	return 0;
}