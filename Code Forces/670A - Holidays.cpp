
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
    int n, minima(0), maxima(0);
    cin>>n;
    if(n>=7)
    {
        int times = n/7;
        n -= (7*times);
        minima += (2*times);
        maxima += (2*times);
    }
    if(n==6)
    {
        minima += 1;
        maxima += 2;
    }
    else//less than 6
    {
        minima += 0;
        maxima += min(2, n);
    }
    cout<<minima<<" "<<maxima<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*

*/