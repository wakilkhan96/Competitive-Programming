
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int s, a, b, n;
    cin >> a >> b >> s;
    int dist = abs(a)+abs(b);
 
    if(s < dist) cout<<"No\n";
    else
    {
        int rem = abs(s-dist);
        if(rem%2==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








