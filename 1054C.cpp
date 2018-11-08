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
	int w,h,k;
	cin>>w>>h>>k;
	int sum=0;
	lp(k)
		sum+=2*(w+h-2)-16*i;
	cout<<sum<<endl;
	return 0;
}