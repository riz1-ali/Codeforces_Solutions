#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define lp(i,n) for(i=0;i<n;i++)
set<int> s;
int main()
{
	ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int n,i,a;
	cin>>n;
	string str;
	cin>>str;
	if(n!=1)
		s.insert(n);
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			s.insert(i);
			a=n/i;
			s.insert(a);
		}
	}
	int arr[s.size()],c=0;
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
		arr[c++]=*it;
	// lp(i,c)
	// 	cout<<arr[i]<<" ";
	// cout<<endl;
	lp(i,c)
	{
		reverse(str.begin(),str.begin()+arr[i]);
		// cout<<str<<endl;
	}
	cout<<str<<endl;
	return 0;
}