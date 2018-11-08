#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
string arr[4];
int check(char c)
{
	if(arr[0][0]==c&&arr[0][1]==c&&arr[0][2]==c)
	    return 1;
	if(arr[1][0]==c&&arr[1][1]==c&&arr[1][2]==c)
	   return 1;
	if(arr[2][0]==c&&arr[2][1]==c&&arr[2][2]==c)
	   return 1;
	if(arr[0][0]==c&&arr[1][0]==c&&arr[2][0]==c)
	   return 1;
	if(arr[0][1]==c&&arr[1][1]==c&&arr[2][1]==c)
	   return 1;
	if(arr[0][2]==c&&arr[1][2]==c&&arr[2][2]==c)
	   return 1;
	if(arr[0][0]==c&&arr[1][1]==c&&arr[2][2]==c)
	   return 1;
	if(arr[0][2]==c&&arr[1][1]==c&&arr[2][0]==c)
	   return 1;
   return 0;
}
int main()
{ 
	lp(3)
    	cin>>arr[i];
    int x=0,y=0,z=0;
    lp(3)
     for(int j=0;j<3;j++)
      {
      	if(arr[i][j]=='X')
           x++;
        else if(arr[i][j]=='0')
           y++;
        else
           z++;
	  }
	if(y>x||x>y+1)
	  	printf("illegal\n");
    else if(x==y+1)
    {
    	if(check('0'))
    	  printf("illegal\n");
    	else if(check('X'))
    	   printf("the first player won\n");
    	else if(z)   
    	   printf("second\n");
    	else
    	 printf("draw\n");	
	}
	else if(x==y)
	{
	   	if(check('X'))
	   	 printf("illegal\n");
	   	else if(check('0'))
	   	 printf("the second player won\n");
	   	else
	   	 printf("first\n");
	}  
}