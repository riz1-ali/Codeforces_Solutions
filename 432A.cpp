#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	int n,k,a,t=0;
	cin>>n>>k;
	vector<int> arr(n);
	lp(n)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	int i=0;
	while(i<n-2)
	{
		int f=max(arr[i],max(arr[i+1],arr[i+2]));
		if(5-f>=k)
		{
			t++;
			i+=3;
		}
		else
			i++;
	}
	cout<<t<<endl;
	return 0;
}