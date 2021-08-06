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
    int days = 0;
    for( days=1; n; days++)
    {
        n--;
        if( days%m==0 ) n++;
 
    }
    cout<<days-1<<'\n';
 
}
 
/*
 
At this problem you need to model what written in statements.
Also, it can be proved,
    that answer can be calculated using formula:  , where ⌊ x⌋ is the integer part of x.
 
*/