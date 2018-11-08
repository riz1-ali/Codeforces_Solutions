#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,bd=0,k,i,p;
	cin>>n;
	k=n;
	while(k>0)
	{
		k/=2;
		bd++;
	}
	for(i=bd;i>0;i--)
	{
		p=pow(2,i-1)*(pow(2,i)-1);
		if(n%p==0)
		{
			cout<<p<<endl;
			break;
		}
	}
	return 0;
}