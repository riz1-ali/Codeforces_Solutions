#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int i=n+1;
	while(check(i)==0 && i<m)
		i++;

//	cout<<i<<endl;
	if(i==m && check(m)==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}