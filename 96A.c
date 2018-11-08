#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,l,c1=0,c2=0,f=0;
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='0')
		{
			c1++;
			c2=0;
		}
		else
                {
                        c2++;
                        c1=0;
                }
		if(c1>=7)
		{
			f=1;
			printf("YES\n");
			break;
		}
		else if(c2>=7)
                {
			f=1;
                        printf("YES\n");
                        break;
                }
	}
	if(f==0)
		printf("NO\n");
	return 0;
}
