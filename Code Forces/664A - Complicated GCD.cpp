
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
    string a, b;
    cin>>a>>b; 
    if(a==b) cout<<a<<"\n";
    else cout<<"1\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

/*
We examine two cases:

a = b — the segment consists of a single number, hence the answer is a.
a < b — we have gcd(a, a + 1, a + 2, ..., b) = gcd(gcd(a, a + 1), a + 2, ..., b) = gcd(1, a + 2, ..., b) = 1
*/