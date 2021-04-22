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



int prime_factors(int n)
{
    int cou = 0;
    for(int x=0; x<psize && prime[x]*prime[x]<=n; x++)
    {
        if(n%prime[x]==0)
        {
            while(n%prime[x]==0)
            {
                n /= prime[x];
                cou++;
            }
        }
    }
    if(n>1) cou++;

    return cou;
}


struct pf
{
    int num, count;
};
vector<pf> primeFactors(2000001);
bool cmp(pf a, pf b)
{
    if(a.count != b.count) return a.count < b.count;
    else return a.num < b.num;
    return false;
}



int main()
{
    //freopen("myfile.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve(2000);
    psize = prime.size();
    
    for(int x=1; x<2000001; x++)
    {
        primeFactors[x].num = x;
        primeFactors[x].count = prime_factors(x);

    } 
    //sort(num.begin()+1,num.end(), cmp);
    sort(primeFactors.begin()+2, primeFactors.end(), cmp);


    //for(int x=1; x<=50; x++) cout<<primeFactors[x].num<<endl;

    //cout<<"done"<<endl;
    int l, r, n, test, tcase = 1;
 
    while(cin>>n)
    {
        if(n==0) break;
        if(n==1) printf("Case %d: 1\n", tcase++);
        else printf("Case %d: %d\n", tcase++, primeFactors[n]);
        //cout<<sum_of_digits(n)<<endl;
       // cout<<prime_factors(n)<<endl;

    }
    //printf("\n");

    return 0;
    
}




/*
Sample Input
1
2
3
4
0
Sample Output
Case 1: 1
Case 2: 2
Case 3: 3
Case 4: 5

*/