#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	if(n<=10)
		cout<<"0\n";
	else if(n>=11 && n<=19)
		cout<<"4\n";
	else if(n==20)
		cout<<"15\n";
	else if(n==21)
		cout<<"4\n";
	else
		cout<<"0\n";
	return 0;
}