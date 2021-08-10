
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, arr[105], maxi = 0, mini = INT_MAX;
    vector<int> diffs;
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=1; i<n-1; i++)
    {
        maxi = 0;
        for(int x=0,y=1; x<n-1, y<n; x++, y++)
        {
            //cout<<x<<" "<<y<<" -> ";
            if(x==i) x++;
            if(y==i) y++;
            int diff = arr[y]-arr[x];
            maxi = max(maxi, diff);
            //cout<<x<<" "<<y<<" "<<maxi<<endl;
        }
        
        mini = min(mini, maxi);
    }

    cout<<mini<<"\n";
    

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








