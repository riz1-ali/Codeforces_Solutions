#include<stdio.h>
#include<string.h>
int main()
{
	char name[1005][15],name_ip[1005][1005];
	char command[1005][15],command_ip[1005][1005];
	int n,m,ans;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		scanf("%s",name_ip[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%s",command[i]);
		scanf("%s",command_ip[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0)
				strcat(name_ip[j],";");
			ans=strcmp(name_ip[j],command_ip[i]);
			if(ans==0)
				printf("%s %s #%s\n",command[i],command_ip[i],name[j]);
		}
	}
	return 0;

}