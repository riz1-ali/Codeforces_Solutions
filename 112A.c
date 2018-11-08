#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char arr1[200],arr2[200];
	scanf("%s",arr1);
	scanf("%s",arr2);
	int l=strlen(arr1);
	int i;
	for(i=0;i<l;i++)
	{
		if(arr1[i]>='A' && arr1[i]<='Z')
			arr1[i]=tolower(arr1[i]);
		if(arr2[i]>='A' && arr2[i]<='Z')
			arr2[i]=tolower(arr2[i]);
	}
	int x=strcmp(arr1,arr2);
	if(x==0)
		printf("0\n");
	else if(x<0)
		printf("-1\n");
	else
		printf("1\n");
	return 0;
}