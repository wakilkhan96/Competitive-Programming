
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int test, n, i;
    string str;
    cin>>n;
    cin>>str;
    int ones = 0, zeros = 0;
    for(int x=0; x<n; x++)
    {
        if(str[x]=='0') zeros++;
        else ones++;
    }
    cout<< n - 2*min(zeros, ones)<<'\n';
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

