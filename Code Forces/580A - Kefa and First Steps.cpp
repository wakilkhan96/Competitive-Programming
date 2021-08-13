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
    vector<int> a(n);
    int count = 1, maximum = 0;
    for(int x=0; x<n; x++)
    {
        cin>>i, a[x]=i;
        if(x>0)
        {
            if(a[x-1]<=a[x]) count++;
            else
            {
                maximum = max(maximum, count);
                count = 1;
            }
        }
    }
 
    maximum = max(maximum, count);
 
 
    cout<<maximum<<'\n';
 
 
 
}