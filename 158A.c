#include<stdio.h>
int main()
{
	int i,n,k,a[50],c=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{	
		if(a[i]>0)
		{	
		if(a[i]>=a[k-1])
			c++;
		}
	}
	printf("%d\n",c);	
	return 0;
}