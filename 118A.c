#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{	
	char a[100],b[210];
	int i,l,v=0;
	scanf("%s",&a);
	l=strlen(a);
	for(i=1;i<=l;i++)
	{	
		if(a[i-1]=='a'||a[i-1]=='e'||a[i-1]=='i'||a[i-1]=='o'|| a[i-1]=='u'||a[i-1]=='y'||a[i-1]=='A'||a[i-1]=='E'||a[i-1]=='I'||a[i-1]=='O'|| a[i-1]=='U'||a[i-1]=='Y')
		continue;
		else
		{
		b[v]='.';
		v++;
		}
		if(isupper(a[i-1]))
		{	
			b[v]=tolower(a[i-1]);
			v++;
		}
		else
		{
			b[v]=a[i-1];
			v++;
		}
	}
	for(i=0;i<v;i++)
	    printf("%c",b[i]);
	printf("\n");
	return 0;
}