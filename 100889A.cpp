#include<bits/stdc++.h>
using namespace std;
long long int maxt(long long int a, long long int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
int main()
{
	long long int a,b,c,d,e,ay=0,ab=0,ans=0,f=0,g=0;
	cin>>a>>b;
	cin>>c>>d>>e;
	f=2*c+d;
	g=d+3*e;
	ay=maxt(0,f-a);
	ab=maxt(0,g-b);
	ans=ay+ab;
	cout<<ans<<endl;
	return 0;
}