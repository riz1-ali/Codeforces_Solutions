#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
	string s;
	cin>>s;
	for(ll i=0;i<s.size();i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}