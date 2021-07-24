#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, temp, odd = 0, even = 0, last_odd = 0, last_even = 0;
    cin>>n;
    for(int x=0; x<n; x++)
    {
        cin>>temp;
        if(temp%2==1) odd++, last_odd = x+1;
        else even++, last_even = x+1;
    }
    if(odd>even) cout<<last_even<<'\n';
    else cout<<last_odd<<'\n';
}
