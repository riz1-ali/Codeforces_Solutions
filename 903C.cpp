#include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	long long int n,i,j,k,c;
    	cin>>n;
    	long long int arr[n],count[n];
    	for(i=0;i<n;i++)
    	{
    	    cin>>arr[i];
    		count[i]=0;
        }
    	sort(arr,arr+n);
    	c=-1;
    	for(i=0;i<n;i++)
    	{
    		for(j=i;j<n;j++)
    		{
    		    if(arr[i]==arr[j])
    		    {
    		        count[i]++;
    		    }
    		}
    		i+=count[i]-1;
    	}
    	for(i=0;i<n;i++)
    	{
    	    if(c<count[i])
    		        c=count[i];
    	}
    	cout<<c<<"\n";
    	return 0;
    }