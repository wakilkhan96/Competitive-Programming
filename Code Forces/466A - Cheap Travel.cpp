#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, a, b, cost(0), t;
    cin >>n >>m >>a >>b;

    if(n%m != 0) t = n%m;
    
    cost += min(a*n, b*(n/m) );
    cost += min(a*t, b*1 );
    cout<<cost<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








