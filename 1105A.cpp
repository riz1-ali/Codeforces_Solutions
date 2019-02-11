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
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int min_c=1e9,min_k=0;
	for(int t=1;t<=1000;t++)
	{
		int tc=0;
		for(int i=0;i<n;i++)
			if(abs(arr[i]-t)>1)
				if(arr[i]>t)
					tc+=abs(arr[i]-(t+1));
				else
					tc+=abs(t-1-arr[i]);
		if(tc<min_c)
		{
			min_c=tc;
			min_k=t;
		}
	}
	cout<<min_k<<" "<<min_c<<endl;
	return 0;
}
