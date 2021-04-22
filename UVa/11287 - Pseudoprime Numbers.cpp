#include <bits/stdc++.h>
using namespace std;
#define maxN 100000; 

typedef long long ll;

bitset<100100> bs;
vector<long long> prime;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    for(int x=2; x<=bound; x++)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back((ll)x);
    }
}


bool isPrimeNumber(long long n)
{
    if(n<=100000) return bs[n];
    else
    {
        for(ll x=0, lm = sqrt(n); x<prime.size() && prime[x]<=lm; x++)
        {
            if(n%prime[x]==0) return false;
        }
    }
    return true;
}


long long bigMod(int base, int power, int modulo)
{
    if(power==0) return 1LL % modulo;
    if(power==1) return base % modulo;
    long long a, b;
    a = bigMod(base, power/2LL, modulo);
    if(power%2==0) b = bigMod(base, power/2LL, modulo);
    else b = bigMod(base, (power/2LL)+1LL, modulo);

    return ( (a%modulo) * (b%modulo) ) % modulo;
}



long long aP_modP(int a, int p)
{
    ll base = a, power = p, modulo = p;
    ll res = bigMod(base, power, modulo);
    return res;
}

int main()
{
    sieve(100000);
    long long p, a;

    while(true)
    {
        cin>>p>>a;
        if(p+a <= 0) break;

        if(isPrimeNumber(p) || aP_modP(a, p) != a) printf("no\n"); 
        else printf("yes\n");

    }

    return 0;
    
}




/*

Sample Input
3 2
10 3
341 2
341 3
1105 2
1105 3
0 0

Sample Output
no
no
yes
no
yes
yes


*/