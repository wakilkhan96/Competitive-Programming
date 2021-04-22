#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int i;
    if( n==1) return false;
    if( n==2 ) return true;
    if(n%2==0) return false;

    for(int i=3; i<=sqrt(n); i+=2)
    {
        if( !(n%i) ) return false;
    }

    return true;
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int x=0; x<t; x++)
    {
        int p;
        scanf("%d,", &p);

        int q = pow( 2, p )-1;

        if( isPrime(p) && isPrime(q)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
