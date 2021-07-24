#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, n, cou = 0, arr[105];
    cin>>n;
    for(int x=0; x<n-1; x++) cin>>arr[x];
    cin>>a>>b;
    for(int x=a-1; x<b-1; x++) cou += arr[x];
    cout<<cou<<endl;
}
