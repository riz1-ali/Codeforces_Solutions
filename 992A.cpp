#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(i=0;i<n;i++)
set<int> s;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,p,i;
	cin>>n;
	lp(i,n)
	{
		cin>>p;
		if(p!=0)
			s.insert(p);
	}
	cout<<s.size()<<endl;
	return 0;
}