#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
    int x,y;
    long double lx,ly;
    cin>>x>>y;
    if(x==y)
    {
    	cout<<"=\n";
    	return 0;
    }
    lx=y*log(x);
    ly =x*log(y); 
    const long double diff = 1e-9;
    if(abs(lx - ly) <= diff)
        cout<<"=\n";
    else if(lx>ly)
        cout<<">\n";
    else
        cout<<"<\n";
    return 0;
}