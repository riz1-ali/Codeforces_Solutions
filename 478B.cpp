#include <bits/stdc++.h>
using namespace std;
long long int combination(long long int n, long long int r)
{
	if(n<=r || r==0)
		return 1;
	if(r==1)
		return n;
	return (n*combination(n-1,r-1))/r;
}
int main() 
{
   long long int n,m,i,mini=0,maxi=0,expr;
   cin>>n>>m;
   if (n==m)
   {
   	mini=maxi=0;
   }
   else
   {
       maxi=combination(n-m+1,2);
       long long int a=n/m;
       long long int b=n%m;
       if (b==0 && a>=2)
       {
           mini+=m*a*(a-1)/2;
       }
       if (a>=2 && b>0)
       {
           mini+=(b*(a+1)*a/2)+(m-b)*a*(a-1)/2;
       }
       else if (a<2 && b>0)
       {
           mini+=b*a*(a+1)/2;
       } 
   }
   cout<<mini<<" "<<maxi<<endl;
   return 0;
}