#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,c,j;
	cin>>n>>m;
	char str[21];
	char l1[m][11],l2[m][11];
	char l[n][11];
	for(i=0;i<m;i++)
		cin>>l1[i]>>l2[i];
	for(i=0;i<n;i++)
		cin>>l[i];
	// for(i=0;i<m;i++)
	// 	cout<<l1[i]<<" "<<l2[i]<<endl;
	// for(i=0;i<n;i++)
	// 	cout<<l[i]<<" ";
	// cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(strcmp(l[i],l1[j])==0)
			{
				if(strlen(l1[j])<=strlen(l2[j]))
					cout<<l1[j]<<" ";
				else
					cout<<l2[j]<<" ";
			}
		}
	}
	cout<<endl;
}