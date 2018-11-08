#include <bits/stdc++.h>
using namespace std;
#define MAXN 200010
int n;
int a[MAXN],b[MAXN];
int main()
{
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
			b[i]=1;
		if(a[i]<0)
			cnt++;
	}
	if(cnt%2)
	{
		int x=0;
		a[0]=-1000000001;
		for(int i=1;i<=n;i++)
			if(a[i]<0 && a[i]>a[x])
				x=i;
		b[x]=1;
	}
	int l1=0,l2=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i]!=1)
		{
			if(l1)
				cout<<"1 "<<l1<<" "<<i<<endl;
			l1=i;
		}
		else
		{
			if(l2)
				cout<<"1 "<<l2<<" "<<i<<endl;
			l2=i;
		}
	}
	if(l2 && l1)
		cout<<"2 "<<l2<<endl;
}