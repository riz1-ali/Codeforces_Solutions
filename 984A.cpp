#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	if(n%2)
		cout<<arr[(n-1)/2]<<endl;
	else
		cout<<arr[n/2-1]<<endl;
    return 0;
}