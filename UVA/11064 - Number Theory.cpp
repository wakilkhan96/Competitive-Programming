#include <bits/stdc++.h>
using namespace std;

bitset<1000100> bs;
vector<int> prime;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    prime.push_back(2);

    for(int x=4; x<=bound; x+=2) bs[x] = 0;
    for(int x=3; x<=bound; x+=2)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back(x);
    }
}

//euler totient function
int phi(int n)
{
    if(n==1) return 0;
    
    int ans = n;
    for(int i=0; i<prime.size() && prime[i]<=sqrt(n); i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            ans -= ans/prime[i];
        }
    }
 
    if(n>1)
    {
        ans -= ans/n;
    }
    return ans;
}



int divisor_count(int n)
{
    int cou = 1;
    for(int x=0; x<prime.size(); x++)
    {
        if(n%prime[x]==0)
        {
            int power = 0;
            while(n%prime[x]==0)
            {
                n /= prime[x];
                power++;
            }

            cou *= power+1;
        }
    }
    if(n>1)
    {
        cou *= 2;
    }

    return cou;

}



int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(1000000);
    //cout<<"done"<<endl;

    int n, test;

    while(cin>>n)
    {
        int res = n-phi(n)-divisor_count(n)+1;
        if(res<0) res = 0;
        if(n==1) printf("0\n");
        else printf("%d\n", res);
        
    }
    //printf("\n");

    return 0;
    
}




/*

strategy:
numbers m, 1 ≤ m ≤ n, 
    where gcd(m, n) ̸= 1 and gcd(m, n) ̸= m
    gcd(m, n) = 1, for co-primes of n
    gcd(m, n) = m, for divisors of n
    so, result = n-phi(n)-divisors(n)+1,

*/