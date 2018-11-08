#include<stdio.h>
#include<string.h>
int main()
{
	int x=98,i,n,l;
	scanf("%d",&n);
	char a[n][100];
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if(l<11)	
			printf("%s\n",a[i]);
                else if(l>100)
                {
                        printf("%c%d%c\n",a[i][0],x,a[i][99]);
                }

		else
		{
			printf("%c%d%c\n",a[i][0],l-2,a[i][l-1]);
		}
	}	
	return 0;
}