#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,x,y,z,sum;
    cin>>n>>k;
    long long int num[n];
    sum=0;
    for(x=0;x<n;x++)
    {
        cin>>num[x];
        sum+=num[x];
    }
    sum=abs(sum);
    if(sum%k==0)y=sum/k;
    else y=sum/k + 1;
    cout<<y<<endl;
    return 0;
}