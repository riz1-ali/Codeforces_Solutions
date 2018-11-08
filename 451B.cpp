#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll check(ll arr[], ll n)
{
	ll i,c=0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			c=1;
			break;
		}
	}
	return c;
}
int main()
{
	ll n;
	cin>>n;
	ll i,arr[n],o=0,f,e;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			o=1;
			f=i;
			break;
		}
	}
	if(o==0)
	{
		cout<<"yes\n"<<"1 1\n";
		return 0;
	}
	e=f;
	while((e<n-1)&&(arr[e]>arr[e+1]))
		e++;
	reverse(arr+f,arr+e+1);
	if(check(arr,n)==0)
		cout<<"yes\n"<<f+1<<" "<<e+1<<endl;
	else
		cout<<"no\n";
	return 0;
}