#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s, x, y, maxi = 0, cnt  = 0;
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if( x*100+y <= s*100 )
        {
            if(y!=0)maxi = max(maxi, 100-y);
            cnt++;
        }
    }

	if(!cnt) cout<<"-1\n";
	else cout<<maxi<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








