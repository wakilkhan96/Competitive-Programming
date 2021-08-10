
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, t, l, r, player_time(1), cnt(0); 
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>l>>r; 
        while(player_time+t <= l) player_time += t;
        //cout<<player_time<<endl;
        cnt += (r-player_time+1);
        player_time = r+1;
    }
    cout<<cnt<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








