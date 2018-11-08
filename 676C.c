#include<stdio.h>
int max(int a,int b)
{
	if(a>=b)
		return a;
	else 
		return b;
}
int main()
{
	int n,k,maxa=0,maxb=0,ca=0,cb=0,c,i,j,len,f,coor;
	scanf("%d%d",&n,&k);
	char arr[n];
	scanf("%s",arr);
	for(i=0;i<n;i++)
	{
		if(arr[i]=='a')
			ca++;
		else
			cb++;
	}
	if(ca==0 || cb==0 || k>=ca || k>=cb)
		printf("%d\n",n);
	else
	{
		i=0;
		j=0;
		c=0;
		while (i<n)
		{
	    	if (j==n-1)
			    break;
		    if (arr[i]=='b' && c<k)
		    {
		        i++;
		        c++;
		    }
		    if (arr[i]=='a')
		    	i++;
		    if (c==k)
		    {
		        if (i-j>maxa)
		        	maxa=i-j;
		        if(arr[i]=='b')
		        {
		            if (arr[j]=='b')
		            	c--;   
		        	j++;
		        }
		   	}
		}
		i=0;
		j=0;
		c=0;
		while (i<n)
		{
	    	if (j==n-1)
			    break;
		    if (arr[i]=='a' && c<k)
		    {
		        i++;
		        c++;
		    }
		    if (arr[i]=='b')
		    	i++;
		    if (c==k)
		    {
		        if (i-j>maxb)
		        	maxb=i-j;
		        if(arr[i]=='a')
		        {
		            if (arr[j]=='a')
		            	c--;   
		        	j++;
		        }
		   	}
		}   
		printf("%d\n",max(maxa,maxb));
	}	
	return 0;
}