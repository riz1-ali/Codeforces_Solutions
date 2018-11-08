#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[1000];
    int n,m,k,i,j,t,pf=0;
    cin>>n>>m>>k;
    for (i=0;i<=m;i++)
        cin>>arr[i];
    for (i=0;i<m;i++)
    {
        t=0;
        for (j=0;j<n;j++)
            if (((arr[i]>>j)&1)!=((arr[m]>>j)&1))
                t++;
        if(t<=k)
            pf++;
    }
    cout<<pf<<endl;
	return 0;
}