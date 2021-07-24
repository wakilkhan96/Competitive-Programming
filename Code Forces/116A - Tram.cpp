#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, n, total = 0, maxi = 0;
    cin>>n;
    
    while(n--)
    {
        cin>>a>>b;
        total -= a;
        total += b;
        maxi = max(maxi, total);
    }
    cout<<maxi<<"\n";
    return 0;
}
