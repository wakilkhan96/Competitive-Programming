#include<bits/stdc++.h>
using namespace std;

void solve()
{

	bool ok=0;
    int m,a,b;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        if(a!=b)
        {
            ok=1;
            break;
        }
    }
    if(ok)
        puts("Happy Alex");
    else
        puts("Poor Alex");

	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








