#include<bits/stdc++.h>
using namespace std;

bitset<5000> bs;
vector<int>primes; 

void sieve(int range)
{
    bs.set();
    bs[1].flip();
    primes.push_back(2);
    for(int x=4; x<=range; x+=2) bs[x] = 0;
    for(int x=3; x<=range; x+=2)
    {
        if(bs[x])
        {
            for(int y=x*x; y<=range; y += x)  bs[x] = 0;
            primes.push_back(x);
        }
    } 
}


bool almost_prime(int n)
{
    int cou = 0;
    for(int x=0; x<primes.size(); x++)
    {
        int p = primes[x];
        if(n%p==0)
        {
            cou++;
            while(n%p==0) n/=p;
        }
    }
    if(n>1) cou++;

    if(cou==2) return true;

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve(3000);

    int n, cou = 0;
    cin>>n;
    for(int x=1; x<=n; x++)
    {
        if(almost_prime(x)) cou++;
    }
    cout<<cou<<'\n';
}
