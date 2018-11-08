#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],x1[n-n/2],x2[n/2],s1=0,s2=0,c1,c2,i;
	x1[0]=n;
	s1+=n;
	c1=1;
	n--;
	x2[0]=n;
	s2+=n;
	c2=1;
	n--;
	for(i=n;i>=1;i--)
	{
//		cout<<s1<<" "<<s2<<endl;
		if(s1>s2)
		{
			x2[c2]=i;
			s2+=x2[c2];
			c2++;
		}
		else
		{
			x1[c1]=i;
			s1+=x1[c1];
			c1++;
		}
	}
	sort(x1,x1+c1);
	sort(x2,x2+c2);
	cout<<abs(s2-s1)<<endl;
	if(x1[0]==1)
	{
		cout<<c1<<" ";
		for(i=0;i<c1;i++)
			cout<<x1[i]<<" ";
		cout<<endl;
	}
	else
	{
		cout<<c2<<" ";
		for(i=0;i<c2;i++)
			cout<<x2[i]<<" ";
		cout<<endl;
	}
	return 0;
}