#include<stdio.h>
int main()
{	
	int n,s,s1;
	scanf("%d",&n);
	s=n/5;
	n=n-s*5;
	s1=n/4;
	n=n-4*s1;
	s+=s1;
	s1=n/3;
	n-=3*s1;
	s+=s1;
	s1=n/2;
	n-=2*s1;
	s=s+s1+n;
	printf("%d\n",s);
	return 0;
}