#include<stdio.h>
int main()
{
    long long int n,y;	
    scanf("%lld",&n);
    y=((n*n*n + 5*n)/6);
    printf("%lld\n",y);
    return 0;
}