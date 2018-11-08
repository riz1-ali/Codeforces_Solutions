#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end)
{
	int i,j,temp;
	for(i=start;i<=(end+start)/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[end+start-i];
		arr[end+start-i]=temp;
	}
}
int main()
{
	int n,i,j,invc=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
     	   if(arr[j]<arr[i])
     	   	invc++;
	int q;
	int l,r;
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		invc+=(r-l)*(r-l+1)/2;
		reverse(arr,l-1,r-1);
		/*for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;*/
		if(invc%2==0)
			cout<<"even\n";
		else
			cout<<"odd\n";
	}

	return 0;
}