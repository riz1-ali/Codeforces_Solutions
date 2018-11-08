#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int m,n,o,p,i,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&m,&o,&p);
		if(m==1&&o==1||o==1&&p==1||p==1&&m==1)
			c++;
	}
	printf("%d\n",c);
	return 0;
}