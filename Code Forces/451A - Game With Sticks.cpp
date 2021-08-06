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
    int mn = min(m ,n);
    if(mn&1) printf("Akshat\n");
    else printf("Malvika\n");
 
// cerr << "Time taken : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl;
}