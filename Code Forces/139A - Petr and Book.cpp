
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v, p;
    cin>>p;
    int arr[7], sum = 0;
    for(int x=0; x<7; x++)
    {
        cin>>arr[x];
        sum += arr[x];
    }
    
    
    while(sum<p) p -= sum;
    //cout<<p<<endl;
    
    for(int x=0; x<7 && p>0; x++)
    {
        p -= arr[x];
        if(p<=0) cout<<x+1<<"\n";
    }
    //cout<<"\n";
    
}