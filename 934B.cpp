#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll k,i;
	cin>>k;
	if(k>36)
		cout<<"-1\n";
	else
	{
		if(k%2==0)
		{
			for(i=0;i<k/2;i++)
				cout<<"8";
			cout<<endl;
		}
		else
		{
			if(k==1)
				cout<<"4\n";
			else
			{
				for(i=0;i<k/2;i++)
					cout<<"8";
				cout<<"0"<<endl;	
			}
		}
	}
	return 0;
}