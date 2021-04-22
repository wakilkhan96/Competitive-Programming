#include <bits/stdc++.h>
using namespace std;
#define maxN 100000; 

typedef long long ll;

bitset<1000100> bs;
vector<long long> prime;

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


vector<int> fact;
void precal()
{
    int lim = 1000000;
    fact.assign(lim+1, 0);
    for(int x=2; x<=lim; x++)
    {
        //cout<<x<<endl;
        int cou = 0;
        int num = x;
        for(int i=0, l=sqrt(num); i<prime.size() && prime[i]<=l && num!=1; i++)
        {
            while(num%prime[i]==0)
            {
                num /= prime[i]; 
                cou++;
                //cout<<i<<"-i-num-"<<x<<endl;
            }
        }
        if(num!=1) cou++;

        fact[x] = fact[x-1] + cou;
    }
}


int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(1000000 );
    //cout<<"done\n";
    precal();
    //cout<<"done\n";

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n", fact[n]);
    }

    return 0;
    
}





/*

Sample Input
2
1000000
1996
5
8
123456

Sample Output
1
3626619
5957
5
11
426566

strategy:
2! = 1 X 2
3! = 1 X 2 = 2! X 3
4! = 1 X 2 X 3 = 3! X 4
5! = 1 X 2 X 3 X 4 = 4! X 5
.
.
N! = (N-1)! X N

In 2!, 2 contains only one prime factor (2)
->fact[2] = 1
In 3!, 3 contains only one prime factor (3),
   3! also consist of 2! which(2!) consists of 1 factor
->fact[3] = fact[2] + 1 = 2
In 4!, 4 contains two prime factor (2,2),
   4! also consist of 3! which(3!) consists of 2 factors
->fact[4] = fact[3] + 2 = 4
In 5!, 5 contains only one prime factor (5),
   5! also consist of 4! which(4!) consists of 4 factor
   ->fact[5] = fact[4] + 1 = 5
*/