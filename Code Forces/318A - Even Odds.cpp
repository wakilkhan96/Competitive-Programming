#include <bits/stdc++.h>
#define fast_io  ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
 
int cmp(int a, int b) { return a>b; }
bool isValid( char ch )
{
    if(ch=='H' || ch=='Q' || ch=='9') return true;
 
    return false;
}
 
 
int main()
{
    fast_io;
 
    long long n, i, k;
    cin>>n>>k;
    long long evens =0, odds = 0;
    if(n&1) odds = (n+1)/2;
    else odds = n/2;
    evens = n/2;
 
    if(k<=odds)
    {
        long long term = 1 + (k-1)*2;
        cout<<term<<'\n';
    }
    else
    {
        k = k-odds;
        long long term = 2 + (k-1)*2;
        cout<<term<<'\n';
    }
 
 
}
 
 
/*
let, n = 7
1 3 5 7  2 4 6  = 4 odds, 3 evens
so, for n = odd value, we get n+1/2 odds and n/2 evens
 
let, n = 6
1 3 5  2 4 6  = 3 odds, 3 evens
so, for n = even value, we get n/2 odds and n/2 evens
*/