#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,n,x,y,z;
	cin>>n;
	while(n--)
    {
        cin>>a>>b;
        if(b%a!=0)cout<<"-1"<<endl;
        else cout<<a<<" "<<b<<endl;
    }
	return 0;
}

