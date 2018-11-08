#include<stdio.h>
#include<math.h>
int main()
{
	double n,m,a,b;
	scanf("%lf",&n);
	scanf("%lf",&m);
	scanf("%lf",&a);
	b=ceil(n/a)*ceil(m/a);
	printf("%.0lf\n",b);
	return 0;
}