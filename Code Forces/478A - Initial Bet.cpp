#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, arr[5], sum(0); 
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    if(sum!=0 && sum%5==0) cout<<sum/5<<"\n";
    else cout<<"-1\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








