#include <bits/stdc++.h>
#define fast_io  ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
 
int cmp(int a, int b) { return a>b; }
 
 
int main()
{
    fast_io;
 
    int test, n, i;
    cin>>n;
    vector<int> arr(n);
    int cs[n];
    for(int x=0; x<n; x++) cin>>i, arr[x]=i;
 
    sort(arr.begin(), arr.end(), cmp);
    cs[0] = arr[0];
    for(int x=1; x<n; x++) cs[x] = cs[x-1]+arr[x];
 
    int low = 0, mid = 0, high = n-1;
    int maximum = cs[n-1];
    while(low<high)
    {
        mid = (low+high)/2;
        if( cs[mid] > (maximum/2) ) high = mid;
        else low = mid+1;
 
        //cout<<low<<" - low    high - "<<high<<'\n';
    }
 
    cout<<low+1<<'\n';
 
 
 
}