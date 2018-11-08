#include<stdio.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int x,y,z;
	for(i=0;i<n;i++)
	{
		x=arr[i];
		y=arr[x-1];
		z=arr[y-1]-1;
//		printf("%d %d %d\n",x,y,z+1);
		if((arr[z]==x)/*&&(x!=y)&&(y!=z)*/)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}