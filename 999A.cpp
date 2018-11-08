#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int n,k,i;
	cin>>n>>k;
	int s[n];
	lp(i,n)
		cin>>s[i];
	int left_m=0,right_m=0;
	lp(i,n)
	{
		if(s[i]>k)
			break;
		left_m++;
	}
	for(i=n-1;i>=0;i--)
	{
		if(s[i]>k)
			break;
		right_m++;
	}
	cout<<min(n,left_m+right_m)<<endl;
	return 0;
}