#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i,j;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	bool isPrime[1000001];
    isPrime[0]=false;
    isPrime[1]=false;
    for(i=2;i<1000001;i++)
        isPrime[i]=true;
    for(i=2;i<1000001;i++)
    {
        if(isPrime[i]==true)
        {
            for(j=2;i*j<1000001;j++)
                isPrime[i*j]=false;
        }
	}
	for(i=0;i<n;i++)
	{
		int n=(int)sqrt(arr[i]);
		if(n-sqrt(arr[i])==0)
		{
			if(isPrime[n])
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else
			cout<<"NO\n";
	}
}