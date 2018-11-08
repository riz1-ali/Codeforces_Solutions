#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos,l,r;
	cin>>n>>pos>>l>>r;
	if(l==1)
	{
		if(r==n)
			cout<<"0\n";
		else
			cout<<abs(r-pos)+1<<endl;
	}
	else if(r==n)
	{
		if(l==1)
			cout<<"0\n";
		else
			cout<<abs(pos-l)+1<<endl;
	}
	else if(r==1)
	{
		cout<<abs(pos-r)+1<<endl;
	}
	else
	{
		cout<<min(abs(pos-l)+abs(r-l)+2,abs(pos-r)+abs(r-l)+2)<<endl;
	}
	return 0;
}