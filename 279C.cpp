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
	int n,q,l,r;
	cin>>n>>q;
	int arr[n],left[n],right[n];
	lp(n)
	{
		cin>>arr[i];
		left[i]=right[i]=0;
	}
	left[n-1]=right[n-1]=n;
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>arr[i+1])
		{
			left[i]=i+1;
			right[i]=right[i+1];
			continue;
		}
		if(arr[i]<arr[i+1])
		{
			left[i]=left[i+1];
			right[i]=i+1;
			continue;
		}
		left[i]=left[i+1];
		right[i]=right[i+1];
	}
	while(q--)
	{
		cin>>l>>r;
		l--;
		if(right[left[l]]>=r)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}