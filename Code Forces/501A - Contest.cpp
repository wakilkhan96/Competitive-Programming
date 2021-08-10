
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    double n, a, b, c, d; 
    cin>>a>>b>>c>>d;
    double misha = max(3.0*a/10.0, a-(a*c/250.0));
    double vasya = max(3.0*b/10.0, b-(b*d/250.0));
    if(misha==vasya) cout<<"Tie\n";
    else if(misha>vasya) cout<<"Misha\n";
    else cout<<"Vasya\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








