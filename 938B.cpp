#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i,f,l,j,t=1e18,time;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n-1;i++)
    {
       	 t=max(arr[i]-1,1000000-arr[i+1]);
         time=min(time,t);
    }
    time=min(time,arr[n-1]-1);
    time=min(time,1000000-arr[0]);
  	cout<<time<<endl;
	return 0;
}