#include<stdio.h>
int main()
{
	int t,n,i,j,f;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		f=0;
		for(i=0;i<101;i++)
		{
			for(j=0;j<101;j++)
			{
				if((7*i+3*j)==n)
				{
					f=1;
					break;
				}
				if((7*i+3*j)>n)
					break;
			}
		}
		if(f==0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}