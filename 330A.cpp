#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,i,j,k,p=0,f=0;
	cin>>r>>c;
	char cake[r][c];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>cake[i][j];
	for(i=0;i<r;i++)
	{
		f=0;
		for(j=0;j<c;j++)
		{
			if(cake[i][j]=='S')
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			for(k=0;k<c;k++)
			{
				if(cake[i][k]=='.')
				{
					p++;
					cake[i][k]='e';
				}
			}

		}
	}
//	cout<<p;
	for(j=0;j<c;j++)
	{
		f=0;
		for(i=0;i<r;i++)
		{
			if(cake[i][j]=='S')
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			for(k=0;k<r;k++)
			{
				if(cake[k][j]=='.')
				{
					p++;
					cake[k][j]='e';
				}
			}
		}
	}
//	cout<<p;
/*	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<cake[i][j];
		cout<<endl;
	}*/
	cout<<p<<endl;
	return 0;
}