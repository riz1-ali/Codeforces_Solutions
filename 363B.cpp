#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	int arr[n];
	lp(n)
		cin>>arr[i];
	deque<int> dq;
	int mini=1e9,sum=0,ind;
	lp(k)
	{
		dq.pb(arr[i]);
		sum+=arr[i];
	}
	mini=min(mini,sum);
	ind=k-1;
	for(int i=k;i<n;i++)
	{
		sum-=dq.front();
		dq.pop_front();
		sum+=arr[i];
		dq.pb(arr[i]);
		if(sum<mini)
		{
			mini=sum;
			ind=i;
		}
	}
	cout<<ind+1-(k-1)<<endl;
	return 0;
}
