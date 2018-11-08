#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[250];
	cin>>arr;
	int i;
	int l=strlen(arr);
	for(i=0;i<l;i++)
	{
		if(arr[i]=='.')
		{
			cout<<"0";
			continue;
		}
		if(arr[i]=='-')
		{
			i++;
			if(arr[i]=='.')
				cout<<"1";
			else
				cout<<"2";
		}
	}
	cout<<endl;
	return 0;
}