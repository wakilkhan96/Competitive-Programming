
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, height[101], arr[101];
    cin>>n;

    for(int x=0; x<n; x++) cin>>height[x], arr[x]=height[x];
    sort(height, height+n);
    int _min = height[0], _max = height[n-1];
    int min_dist = 0, max_dist = 0;
    
    //cout<<_min<<" "<<_max<<endl;
    
    for(int x=0; x<n; x++)
    {
        if(arr[x]==_max)
        {
            max_dist = x;
            break;
        }
    }
    for(int x=n-1; x>=0; x--)
    {
        if(arr[x]==_min)
        {
            min_dist = x;
            break;
        }
    }
    
    //cout<<min_dist<<" "<<max_dist<<endl;
    int res = max_dist+(n-min_dist-1);
    if(max_dist>min_dist) res--;
    cout<<res<<"\n";
    
}