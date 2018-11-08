#include<stdio.h>
int main()
{
	int i,n,m;
	scanf("%d",&n);
	int x[n],y[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x[i],&y[i]);
	}
	int p=0,ne=0,f=0;
	for(i=0;i<n;i++)
	{
		if(x[i]<0)
			ne++;
		else
			p++;
	}
	if(ne==1 || ne==0)
	{
		f=1;
	}
	else if(p==1 || p==0)
	{
		f=1;
	}
	if(f==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}