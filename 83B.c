#include<stdio.h>
typedef long long int ll;
int main()
{
	ll n,k,i,j;
		scanf("%lld%lld",&n,&k);
	ll arr[n],coor[n],sum=0,c=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		coor[i]=i+1;
		sum+=arr[i];	
	}
	if(sum<k)
		printf("-1\n");
	else if(k==sum)
		printf("\n");
	else
	{
		ll a=k/n,z,b,m=-1,x=k,y=n;
		while(x>=y)
		{
			z=0;
			for(i=0;i<n;i++)
			{
				if(arr[i]>=x/y)
				{
					if(arr[i]==x/y)
						coor[i]=0;
					arr[i]-=x/y;
					m=i;
				}	
				else
				{
					m=i;
					z+=x/y-arr[i];
					coor[i]=0;
					arr[i]=0;
				}
			}
			x=z+x%y;
		}
		i=0;
		while(x>0)
		{
			if(arr[i]>0)
			{
				b=1;
				x-=b;
				arr[i]-=b;
				m=i;	
/*				for(j=0;j<n;j++)
				printf("%lld ",arr[j]);
			printf("\n");*/
				if(arr[i]==0)
				{
					coor[i]=0;
					y--;
				}
			}
			i++;
			if(i==n)
				i=0;	
		}
		if(m==n-1)
			m=0;
		else
			m++;
		while(c<n)
		{
			if(coor[m]!=0)
				printf("%lld ",coor[m]);
			m++;
			c++;
			if(m==n)
				m=0;
		}
		printf("\n");
	}
	return 0;
}