#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans[3][3],arr[3][3],x,i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>x;
			x%=2;
			arr[i][j]=x;
			ans[i][j]=1;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==1)
			{
				if(ans[i][j]==1)
					ans[i][j]=0;
				else
					ans[i][j]=1;
				if(j>0)
				{
					if(ans[i][j-1]==1)
						ans[i][j-1]=0;
					else
						ans[i][j-1]=1;
				}
				if(i>0)
				{
					if(ans[i-1][j]==1)
						ans[i-1][j]=0;
					else
						ans[i-1][j]=1;
				}
				if(i<2)
				{
					if(ans[i+1][j]==1)
						ans[i+1][j]=0;
					else
						ans[i+1][j]=1;
				}
				if(j<2)
				{
					if(ans[i][j+1]==1)
						ans[i][j+1]=0;
					else
						ans[i][j+1]=1;
				}
			}
			// for(int k=0;k<3;k++)
			// {
			// 	for(int l=0;l<3;l++)
			// 		cout<<ans[k][l];
			// 	cout<<endl;
			// }
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<ans[i][j];
		cout<<endl;
	}
	return 0;
}