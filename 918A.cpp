#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i;
	cin>>n;
	// if(n==1)
	// {
	// 	cout<<"O\n";
	// 	return 0;
	// }
	// if(n==2)
	// {
	// 	cout<<"OO\n";
	// 	return 0;
	// }
	ll a=0,b=1,c=1;
	while(c<=n)
	{
		if(c==a+b)
		{
			cout<<"O";
			a=b;
			b=c;
		}
		else
		{
			cout<<"o";
		}
		c++;
	} 
	cout<<endl;
	return 0;
}