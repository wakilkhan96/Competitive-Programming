#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p, q, cou(0);
    
    cin>>n; 
    for(int i=0; i<n; i++)
    {
        cin >>p >>q;
        if(q-p>=2) cou++;
    }
    
    cout<<cou<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








