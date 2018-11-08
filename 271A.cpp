#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	int arr[4],i;
	for(i=3;i>=0;i--)
	{
		arr[i]=n%10;
		n/=10;
	}
	if((arr[0]==arr[1])||(arr[0]==arr[2])||(arr[0]==arr[3])||(arr[1]==arr[2])||(arr[1]==arr[3])||(arr[2]==arr[3]))
		return 0;
	else
		return 1;
}
int main()
{
	int n;
	cin>>n;
	n++;
	while(1)
	{
		if(check(n)==0)
			n++;
		else
		{
			cout<<n<<endl;
			return 0;
		}
	}
	return 0;
}