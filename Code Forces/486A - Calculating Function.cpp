#include<bits/stdc++.h>
using namespace std;

long long sum_of_first_n_odds(long long n)
{
    return n*n;
}
long long sum_of_first_n_evens(long long n)
{
    return n*(n+1);
}

void solve()
{
    long long n, num_of_odds, num_of_evens, t;
    cin>>n;
    num_of_evens = n/2;
    num_of_odds = (n&1)? 1+n/2 : n/2;
    cout<<sum_of_first_n_evens(num_of_evens)-sum_of_first_n_odds(num_of_odds)<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








