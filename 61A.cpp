#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a1[150],a2[150];
	cin>>a1;
	cin>>a2;
	int l=strlen(a1);
	for(int i=0;i<l;i++)
	{
		if(a1[i]==a2[i])
			cout<<"0";
		else
			cout<<"1";
	}
}