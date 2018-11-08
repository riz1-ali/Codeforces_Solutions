#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int poss[m+1],a,b,i,j;
    for(i=0;i<=m;i++)
        poss[i]=0;
    poss[0]=1;   
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        for(j=a+1;j<=b;j++)
            poss[j]=1;
    }
   /* for(i=0;i<=m;i++)
        printf("%d  ",poss[i]);
    printf("\n");*/
    int f=0;
    for(i=0;i<=m;i++)
    {
        if(poss[i]==0)
        {
            f=1;
            printf("NO\n");
            break;
        }
    }
    if(f==0)
        printf("YES\n");
   return 0;
}