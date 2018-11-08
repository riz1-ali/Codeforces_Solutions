#include<stdio.h>
int main()
{	
	int n,i;
	double a[100],s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}	
	for(i=0;i<n;i++)
		s+=a[i];
	double r=s/n;
	printf("%lf\n",r);
	return 0;
}