#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, int> mp;
    int n, max_goal = 0;
    string a, b;
    cin>>n;
    while(n--)
    {
        cin>>a;
        mp[a]++;
        if(mp[a]>max_goal)
        {
            b = a;
            max_goal = mp[a];
        }
    }
    cout<<b<<'\n';
}
