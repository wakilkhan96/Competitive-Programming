
#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int k, arr[12];
    cin>>k;
    for(int x=0; x<12; x++) cin>>arr[x];
    
    sort(arr, arr+12, cmp);
    
    int _min = 0;
    for(int x=0; k>0 && x<12; x++)
    {
        k -= arr[x];
        _min = x+1;
    }
    
    if(k>0) _min = -1;
    cout<<_min<<endl;

    return 0;

    
}