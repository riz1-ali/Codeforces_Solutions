#include<stdio.h>
#include<string.h>
int main()
{	
	int n,i,j,c=0,flag,l;
	char name[100];
	scanf("%s",&name);
	l=strlen(name);
	for(i=0;i<l;i++)
	{	flag=0;
		for(j=i;j>0;j--)
		{
			if(name[i]==name[j-1])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			c++;
	}
	if(c%2==0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM!\n");
	return 0;
}