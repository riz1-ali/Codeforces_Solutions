#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	int n,a=1,b=1,c=1;
	cin>>n;
	c=n-2;
	if(c%3==0)
	{
		c--;
		b++;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}