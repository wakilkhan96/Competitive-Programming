#include <bits/stdc++.h>
#define fast_io  ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
 
int cmp(int a, int b) { return a>b; }
 
 
int main()
{
    fast_io;
 
    int test, n, m, i;
    cin>>n>>m;
    vector<int> f(m);
    for(int x=0; x<m; x++) cin>>i, f[x]=i;
    sort(f.begin(), f.end());
    int minimum = INT_MAX;
    for(int x=n-1; x<m; x++)
    {
        minimum = min(minimum, f[x]-f[x-n+1]);
    }
 
    cout<<minimum<<'\n';
 
}