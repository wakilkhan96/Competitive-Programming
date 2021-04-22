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

struct RakinFibonacci
{
    int a_count, b_count;
};

vector<RakinFibonacci>rf(50);

void init_little_rakin_fibonacci()
{
    rf[0].a_count = 1; rf[0].b_count = 0;
    rf[1].a_count = 0; rf[1].b_count = 1;

    for(int x=2; x<50; x++)
    {
        rf[x].a_count = rf[x-1].a_count + rf[x-2].a_count;
        rf[x].b_count = rf[x-1].b_count + rf[x-2].b_count;
    }
}

int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(100000);
    init_little_rakin_fibonacci();
    

    //cout<<prime.size()<<endl;
    int test;
    int n, a, b;
    cin>>test;

    while(cin>>n>>a>>b)
    {
        int a_count, b_count;
        a_count = rf[n].a_count;
        b_count = rf[n].b_count;

        map<int, int>mp;
        map<int, int>::iterator it;
        mp.clear();

        
        for(int x=0; x<prime.size() && prime[x]<=a; x++)
        {
            while(a%prime[x]==0)
            {
                mp[prime[x]] += a_count;
                a /= prime[x];
            }
        }
        if(a!=1 && bs[a]) mp[prime[a]] += a_count;

        for(int x=0; x<prime.size() && prime[x]<=b; x++)
        {
            while(b%prime[x]==0)
            {
                mp[prime[x]] += b_count;
                b /= prime[x];
            }
        }
        if(b!=1 && bs[b]) mp[prime[b]] += b_count;    

        //sort(mp.begin(), mp.end());


        for(it=mp.begin(); it!=mp.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<'\n';
        }
        printf("\n");

    }

    return 0;
    
}




/*

Sample Input
2
2 2 3
13 2 3
Sample Output
2 1
3 1
2 144
3 233


2
13 2 3
2 2 3



/*

strategy:
find a_cont and b_cont for  every F(n):

as F(n) = F(n-1) * F(n-2), so powers of a and b will be added

_F(0)__F(1)__F(2)__F(3)__F(4)__F(5)_____________________________________________________
|  a |  1  |  0  |  1   |  1 |  2  |  3  |  5  |   8  |  13  |  21  |   |   |   |   
|  b |  0  |  1  |  1   |  2 |  3  |  5  |  8  |  13  |  21  |  34  |   |   |   |

F(n) = [a], [b], [ab], [ab*b], [abb*ab], [aabbb*abb], ...., ......, ....
     = [a], [b], [ab], [abb], [aabbb], [aaabbbbb], ...., ......, ....

void init_little_rakin_fibonacci()
{
    rf[0].a_count = 1; rf[0].b_count = 0;
    rf[1].a_count = 0; rf[1].b_count = 1;

    for(int x=2; x<50; x++)
    {
        rf[x].a_count = rf[x-1].a_count + rf[x-2].a_count;
        rf[x].b_count = rf[x-1].b_count + rf[x-2].b_count;
    }
}


*/


*/


