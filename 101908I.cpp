#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	int x,y,z,t1,t2,t3;
	cin>>x>>y>>z>>t1>>t2>>t3;
	int f=abs(x-y);
	int tx=f*t1;
	int fd=abs(x-z);
	int tz=fd*t2;
	tz+=f*t2;
	tz+=3*t3;
	if(tz<=tx)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}