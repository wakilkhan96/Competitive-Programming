#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int cou = 0;
    if(n%2==0) cou++;
    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0) cou++;
    }
    if(cou) return false;
    return true;
}

void solve()
{
    int n;
    cin>>n; 
    for(int i=4; i<n-i; i++)
    {
        if(!isPrime(i) && !isPrime(n-i))
        { 
            cout<<i<<" "<<n-i<<"\n";
            break;
        }
    }
    
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








