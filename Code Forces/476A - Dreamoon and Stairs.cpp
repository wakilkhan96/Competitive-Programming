#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int nn, n, m;
    cin>>n>>m;

    if(n%m != 0)
    {
        int t = n/m;
        nn = (t+1)*m;

    } 
    else nn = n;

    bool got = false;
    for(int step=0; step<=nn && !got; step += m)
    {
        for(int i=step; i>=0; i--)
        {
            
            if(2*i + (step-i)*1 == n)
            {
                cout<<step<<"\n";
                got = true;
                break;
            } 
        }
    }

    if(!got) cout<<"-1\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








