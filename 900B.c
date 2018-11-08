#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int arr[100000],r[100000],i=0,rem,cx=-1,k=0,j,f=0;
	for(i=0;i<100000;i++)
		r[i]=0;
	i=0;
	a%=b;
	while(1)
	{
		a*=10;
		arr[i]=a/b;
		i++;
		rem=a%b;
		a=rem;
		r[rem]++;
		if(r[rem]>2)
		{
			k=1;
			break;
		}
		if(rem==0)
		{
			f=1;
			break;
		}
	}
	if(c==0&&f==1)
		cx=i+1;
/*	else
	{
		for(j=0;j<i;j++)
			printf("%d ",arr[j]);
		printf("\n");*/
		for(j=0;j<i;j++)
		{
			if(c==arr[j])
			{
				cx=j+1;
				break;
			}
		}
	printf("%d\n",cx);
	return 0;
}