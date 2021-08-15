
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
    int n, y, cnt(0);
    string str;
    cin>>n; 

    map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) 
        {
            cin>> y;
            if(y==1) mp[i+1]++;
            else if(y==2) mp[j+1]++;
            else if(y==3) mp[i+1]++, mp[j+1]++;
        }
    }
    cnt = n-mp.size();
    cout<<cnt<<"\n";
    for(int i=1; i<=n; i++)
    {
        if(!mp[i]>0) cout<<i<<" ";
    }
    if(cnt)cout<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}
