#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,i,j,m,hash[26],coor[26],x=0,f=0;
    char str[1010];
    cin>>k>>str;
    l=strlen(str);
    for(i=0;i<26;i++)
    {
        hash[i]=0;
        coor[i]=0;
    }    
    for(i=0;i<l;i++)
    {
        hash[str[i]-97]++;
        if(coor[str[i]-97]==0)
        {
            coor[str[i]-97]=1;
            x++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(hash[i]%k!=0)
        {
            cout<<"-1\n";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        for(i=0;i<26;i++)
            hash[i]/=k;
        for(i=0;i<k;i++)
        {
            for(j=0;j<26;j++)
            {
                for(m=0;m<hash[j];m++)
                {
                   cout<<(char)(j+97); 
                }
            }
        }
        cout<<endl;
    }
/*    for(i=0;i<26;i++)
        cout<<hash[i]<<" ";
    cout<<endl;*/
    return 0;
}