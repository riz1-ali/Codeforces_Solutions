#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,a=1;
	cin>>n>>k;
	if(k>=2)
	{
		while(a<=n)
			a*=2;
		a--;
		cout<<a<<endl;
	}
	else
		cout<<n<<endl;
	return 0;
}