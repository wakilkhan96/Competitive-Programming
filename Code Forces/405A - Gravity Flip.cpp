#include <bits/stdc++.h>
#define fast_io  ios::sync_with_stdio(0);cin.tie(0);
#define memset(a,x) memset(a,x,sizeof(a))
#define endl '\n'
using namespace std;
 
int cmp(int a, int b) { return a>b; }
 
 
int main()
{
    fast_io;
 
    int test, n, m, i;
    cin>>n;
    vector<int> arr(n);
    for(int x=0; x<n; x++) cin>>i, arr[x]=i;
 
    sort(arr.begin(), arr.end());
    for(int x=0; x<n; x++) cout<<arr[x]<<" ";
    cout<<'\n';
 
}
 
/*
 
 
 
*/