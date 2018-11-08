#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,rem;
	cin>>n;
	rem=n%10;
	if(rem<=5)
		n-=rem;
	else
		n=n+(10-rem);
	cout<<n<<endl;
	return 0;
}