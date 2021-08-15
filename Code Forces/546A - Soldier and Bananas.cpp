
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
    long long n, k, w;
    long long w1, w2;
    cin>>k>>n>>w;

    w1 = w;
    w2 = w+1;
    if(w1&1LL) swap(w1, w2);
    w1 /= 2LL;
    long long brw = (k*w1*w2) - n;
    cout<< (brw>0? brw : 0LL)<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}
