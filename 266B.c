#include <stdio.h>
int main()
{
	int n,t;
	scanf("%d%d",&n,&t);
	char arr[n];
	scanf("%s",arr);
	int i,c=0;
	while(t--)
	{
	for(i=0;i<n-1;i++)
	{
		if(arr[i]=='B'&&arr[i+1]=='G')
		{
			arr[i+1]='B';
			arr[i]='G';
	//		c++;
			i++;
		}
	}
	}
	printf("%s\n",arr);
}