#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[150];
	cin>>str;
	int i,l=strlen(str),uc=0,lc=0;
	for(i=0;i<l;i++)
	{
		if(islower(str[i]))
			lc++;
		else
			uc++;
	}
	if(lc>=uc)
	{
		for(i=0;i<l;i++)
		{
			if(isupper(str[i]))
				str[i]=tolower(str[i]);
		}
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(islower(str[i]))
				str[i]=toupper(str[i]);
		}
	}
	cout<<str<<endl;
	return 0;
}