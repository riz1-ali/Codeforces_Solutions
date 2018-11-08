#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,l,r,i;
	char c1,c2;
	cin>>n>>m;
	char str[n];
	cin>>str;
	while(m--)
	{
		cin>>l>>r>>c1>>c2;
		for(i=l;i<=r;i++)
		{
			if(str[i-1]==c1)
				str[i-1]=c2;
		}
	}
	cout<<str<<endl;
	return 0;
}