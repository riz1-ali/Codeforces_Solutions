#include<stdio.h>
typedef long long int ll;
int main()
{
  ll n,i,j,k,ans=0;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
  {
    for(j=i;j<=n;j++)
    {
      k=j^i;
      if(k>0 && k<=n && ((i+j>k)&&(j+k>i)&&(k+i>j)&&(i<=j)&&(j<=k)))
        ans++;      
    }
  }
  printf("%lld\n",ans);
  return 0;
}