#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,j,c=0,k,f=1;
    char str[110];
    cin>>n>>d;
    cin>>str;
    for(i=0;i<n;)
    {
        for(j=i;j<=i+d;j++)
        {
            if(j>=n)
                break;
            else
            {
                if(str[j]=='1')
                    k=j;
            }
        }
        if(k==i)
        {
            f=0;
            break;
        }
        else
        {
            i=k;
            c++;
        }
        if(i==n-1)
            break;
    }
    if(f==0)
        cout<<"-1\n";
    else
        cout<<c<<endl;
	return 0;
}