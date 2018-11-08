#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int l,i,c=0;
	scanf("%s",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
			c++;
		if((int)str[i]>=48 && (int)str[i]<=57)
		{
			if((int)str[i]%2==1)
				c++;
		}
	}
	printf("%d\n",c);
	return 0;
}