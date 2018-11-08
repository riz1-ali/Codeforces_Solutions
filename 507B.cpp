#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int r,x,y,w,z;
	cin>>r>>x>>y>>w>>z;
	double ans,dist;
	long long int a=abs(w-x),b=abs(y-z);
	dist=sqrt(a*a+b*b);
	ans=ceil(dist/(2*r));
	cout<<ans<<endl; 
	return 0;
}