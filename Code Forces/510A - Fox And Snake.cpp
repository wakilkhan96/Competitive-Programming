
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            for(int j=0; j<m; j++) cout<<"#";
        }
        else
        {
            if(i%4==0)
            {
                cout<<"#";
                for(int j=0; j<m-1; j++) cout<<".";
            }
            else
            {
                for(int j=0; j<m-1; j++) cout<<".";
                cout<<"#";
            }
        }
        cout<<"\n";
    }
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








