#include<stdio.h>
int main()
{
	long int n,c=2,i;
	scanf("%ld",&n);
	long int x[n],h[n];
	for(i=0;i<n;i++)
		scanf("%ld%ld",&x[i],&h[i]);
	for(i=1;i<n-1;i++)
	{
		if (x[i]-x[i-1]>h[i])
			c++;
		else if(x[i+1]-x[i]>h[i])
		{
			c++;
			x[i]+=h[i];
			h[i]=0;
		}
	}
	if(n>1)
		printf("%ld\n",c);
	else if(n==1)
		printf("1\n");
	else if(n==0)
		printf("0\n");
	return 0;
}