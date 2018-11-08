#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,count[10],n,f=0;
    for(i=0;i<10;i++)
        count[i]=0;
    char str[4][4];
    cin>>n;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>str[i][j];
            if(str[i][j]!='.')
                count[str[i][j]-48]++;
        }
    }
    for(i=0;i<10;i++)
    {
        if(count[i]>2*n)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}