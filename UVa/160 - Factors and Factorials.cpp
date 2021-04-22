#include <bits/stdc++.h>
using namespace std;

bitset<10100> bs;
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



struct my_map
{
    int mp[101];
    void init()
    {
        for(int x=0; x<101; x++) mp[x] = 0;
    }
};

vector<my_map> v;
void precal()
{
    //v.resize(101);
    v.resize(110);
    for(int x=0; x<110; x++) v[x].init();

    for(int x=2; x<110; x++)
    {
        //cout<<"x->"<<x<<endl;
        v[x] = v[x-1];

        int number = x;
        for(int i=0; i<prime.size() && prime[i]<=number; i++)
        {
            while(number%prime[i]==0)
            {
                number /= prime[i];
                v[x].mp[prime[i]] += 1;
            }
        }
        if(number>1)
        {
            v[x].mp[number] += 1;
        }

    }
}


int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(1000);
    //cout<<"done"<<endl;
    precal();
    //cout<<"done"<<endl;

    int n, test;

    while(cin>>n)
    {
        if(n==0) break;
        else 
        {
            int startPoint = 2, endPoint = 100;
            for(int x=100; x>=0; x-- )
            {
                if(v[n].mp[x]>0)
                {  
                    endPoint = x;
                    break;
                }
            }

            printf("%3d! =", n);
            int cou = 1;
            for(int x=startPoint; x<=endPoint; x++ )
            {
                if(!bs[x]) continue;
                if(cou%16==0) printf("\n      ");
                printf("%3d", v[n].mp[x]);
                cou++;
            }
            printf("\n");
        }
        
    }
    //printf("\n");

    return 0;
    
}




/*

Sample Input
5
53
0
Sample Output
5! = 3 1 1
53! = 49 23 12 8 4 4 3 2 2 1 1 1 1 1 1
1

strategy:


*/