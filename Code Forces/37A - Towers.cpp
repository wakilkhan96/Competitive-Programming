#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, temp, mx= -INT_MAX;
    cin>>n;
    map<int, int> mp;
    for(int x=0; x<n; x++) cin>>temp, mp[temp]++, mx= max(mx, mp[temp]);
    cout<<mx<<" "<<mp.size()<<'\n';

}
