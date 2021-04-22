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

    int sqrt_bound = sqrt(bound);
    for(int x=2; x<=bound; x+=2) bs[x] = 0;
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

int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(1000000 );
    //cout<<"done\n";

    int n;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<phi(n)<<endl;
    }

    return 0;
    
}




/*

Sample Input
12
123456
7654321
0
Sample Output
4
41088
7251444

strategy:
find out co-primes or relative primes of n,
euler totient function finds that easily
https://algorithmist.com/wiki/Euler%27s_Phi_function
*/