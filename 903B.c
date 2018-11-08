#include<stdio.h>
int arr[400000];
int main()
{
	int h1,a1,c1,h2,a2;
	scanf("%d%d%d",&h1,&a1,&c1);
	scanf("%d%d",&h2,&a2);
	int c=0;
	while(h2>0)
	{
		if(h1>a2)
		{
			h2-=a1;
			arr[c]=0;
			c++;
			h1-=a2;
		}
		else if(h2<=a1)
		{
			h2-=a1;
			arr[c]=0;
			c++;
		}
		else if(h1==a2 || h1-a2<=0)
		{
			h1+=c1;
			arr[c]=1;
			c++;
			h1-=a2;
		}
		else if(h2==a1 || h2-a1<=0)
		{
			h2-=a1;
			arr[c]=0;
			c++;
		}
		else if(h1<a2)
		{
			h1+=c1;
			arr[c]=1;
			c++;
			h1-=a2;
		}
	}
	printf("%d\n",c);
	int i=0;
	while(i<c)
	{
		if(arr[i]==0)
			printf("STRIKE\n");
		else
			printf("HEAL\n");
		i++;
	}	
	return 0;
}