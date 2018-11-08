#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,maxi=0,mixs=0,maxa=INT_MAX,mixr=0,i;
	cin>>n>>a>>b;
	for(i=1;i<=n/2;i++)
	{
		mixs=min(b/(n-i),a/i);
		mixr=min(a/(n-i),b/i);
		maxa=max(mixs,mixr);
		maxi=max(maxi,maxa);
	//	cout<<mixs<<" "<<mixr<<" "<<maxa<<" "<<maxi<<"\n";
	}
	cout<<maxi<<endl;
	return 0;
}