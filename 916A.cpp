#include <bits/stdc++.h>
using namespace std;
int hh,mm,x;
void fix()
{
	if(mm>=x)
	{
		mm=mm-x;
		return;
	}
	if(mm<x && hh!=0)
	{
		hh--;
		mm=60-(x-mm);
		return;
	}
	hh=23;
	mm=60-(x-mm);
	return;
}
int main()
{
	int c=0;
	cin>>x;
	cin>>hh>>mm;
	if(hh%10==7 || mm%10==7)
	{
		cout<<"0\n";
		return 0;
	}
	while(1)
	{
		fix();
		c++;
		if(hh%10==7 || mm%10==7)
		{
			cout<<c<<endl;
			return 0;
		}
	}
	return 0;
}