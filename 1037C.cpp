#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,i;
	cin>>n;
	string a,b;
	cin>>a>>b;
	int ans=0;
	for(i=0;i<n;i++)
	{
		if(i+1<n)
		{
			if(a[i]==b[i+1] && b[i]==a[i+1] && a[i]!=b[i])
			{
				ans++;
				char temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
			else if(a[i]!=b[i])
			{
				ans++;
				if(a[i]=='0')
					a[i]='1';
				else
					a[i]='0';
			}
		}
		else
		{
			if(a[i]!=b[i])
			{	
				ans++;
				if(a[i]=='0')
					a[i]='1';
				else
					a[i]='0';
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}