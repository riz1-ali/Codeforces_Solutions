#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,m,i,j,prod,temp;
	cin>>n>>m;
 	ll x[n],y[m],x1,y1;
 	for(i=0;i<n;i++)
 		cin>>x[i];
 	for(i=0;i<m;i++)
 		cin>>y[i];
 	sort(x,x+n);
 	sort(y,y+m);
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			if(j==0)
 				prod=x[i]*y[j];
 			else
 			{
 				if(x[i]*y[j]>prod)
 					prod=x[i]*y[j];
 			}
 		}
 		if(i==0)
 		{
 			temp=prod;
 			x1=i;
 		}
 		else
 		{
 			if(prod>temp)
 			{
 				temp=prod;
 				x1=i;
 			}
 		}
 	}
// 	cout<<temp<<endl;
 	x[x1]=1e10;
 	sort(x,x+n);
 	// for(i=0;i<n;i++)
 	// 	cout<<x[i]<<" ";
 	// cout<<endl;
 	for(i=0;i<n-1;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			if(j==0)
 				prod=x[i]*y[j];
 			else
 			{
 				if(x[i]*y[j]>prod)
 					prod=x[i]*y[j];
 			}
 		}
 		if(i==0)
 		{
 			temp=prod;
 			x1=i;
 		}
 		else
 		{
 			if(prod>temp)
 			{
 				temp=prod;
 				x1=i;
 			}
 		}
 	}
 	cout<<temp<<endl;
 	return 0;
}