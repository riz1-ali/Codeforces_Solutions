#include <bits/stdc++.h>
using namespace std;
int main()
{
	string arr;
	cin>>arr;
	int i,l=arr.length();
	int e_ind=l-1;
	for(i=0;i<l;i++)
	{
		if((arr[i]-'0')%2==0)
		{
			e_ind=i;
			if(arr[l-1]>arr[i])
				break;
		}
	}
	if(e_ind==l-1)
	{
		cout<<"-1\n";
		return 0;
	}
	swap(arr[e_ind],arr[l-1]);
	cout<<arr<<endl;
	return 0;
}