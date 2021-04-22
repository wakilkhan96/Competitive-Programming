#include <bits/stdc++.h>
using namespace std;

bitset<500010> bs;
vector<int> prime;
int psize;

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


int sopf(int n)
{
    int sum = 0, number = n;
    for(int x=0; x<psize && prime[x]*prime[x]<=number; x++)
    {
        if(number%prime[x]==0)
        {
            int power = 0;
            while(number%prime[x]==0)
            {
                number /= prime[x];
                power++;
            }
            sum += (power*prime[x]);
        }
    }
    if(number>1)
    {
        sum += number;
    }

    return sum;
}


int lsopf_fun(int x)
{
    int cou = 1, n = x, sopf_val = 0;
    if(!bs[n])
    { 
        while(true)
        {
            sopf_val = sopf(n);
            if(sopf_val==n) break;
            else 
            {
                n = sopf_val;
                cou++;
            }
        }
    }
    
    return cou;
}



//precal requires more time
vector<int> lsopf;
void precal()
{
    lsopf.assign(5000009, 0);

    for(int x=2; x<500001; x++)
    {
        int cou = 1, n = x, sopf_val = 0;
        if(!bs[n])
        {
            while(true)
            {
                sopf_val = sopf(n);
                if(sopf_val==n) break;
                else 
                {
                    n = sopf_val;
                    cou++;
                }
            }
        }
        lsopf[x] = cou;
    }

}

int main()
{
    //freopen("myfile.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve(500000);
    psize = prime.size();
    //precal();
    //cout<<"done"<<endl;
    

    int l, r, n, test, tcase = 1;
    cin>>test;
    while(test--)
    {
        cin>>l>>r;
        //cin>>n;
        //cout<<sopf(n)<<endl;
        if(l>r) swap(l, r);
        
        int res = 1;
        for(int x=l; x<=r; x++) res = max(res, lsopf_fun(x));
        printf("Case #%d:\n%d\n", tcase++, res);

    }
    //printf("\n");

    return 0;
    
}




/*
Sample Input
2
2 10
11 20
Sample Output
Case #1:
3
Case #2:
4

*/