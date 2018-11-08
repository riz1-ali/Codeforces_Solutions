#include <bits/stdc++.h>
using namespace std;
int main()
{
	char str[101],sub[101];
	cin>>str;
	int l,i,c=0,j,k,ans=0;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='Q' || str[i]=='A')
		{
			sub[c]=str[i];
			c++;
		}
	}
	for(i=0;i<c-2;i++)
	{
		for(j=i+1;j<c-1;j++)
		{
			for(k=j+1;k<c;k++)
			{
				if(sub[i]=='Q' && sub[j]=='A' && sub[k]=='Q')
					ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}