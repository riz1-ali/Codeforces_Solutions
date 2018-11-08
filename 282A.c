#include<stdio.h>
int main()
{
	int x=0,n;
	scanf("%d",&n);
	char str[5];
	while(n--)
	{
		scanf("%s",str);
		if(str[0]=='X')
		{
			if(str[1]=='+')
				x++;
			else
				x--;
		}
		else
		{
			if(str[1]=='+')
				x++;
			else
				x--;
		}
	}
	printf("%d\n",x);
	return 0;
}