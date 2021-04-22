#include <bits/stdc++.h>
using namespace std;
#define MAXN 2000000  

bitset<MAXN+1> bs;
vector<int> prime;
int psize;


void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    prime.push_back(2);
    psize++;

    for(int x=4; x<=bound; x+=2) bs[x] = 0;
    for(int x=3; x<=bound; x+=2)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back(x), psize++;
    }
}


vector<int> phiValue(1000000+1);
vector<long long> cumulativePhi(1000000+1);
void phi_1_to_n(int n) 
{
    phiValue[0] = 0;
    phiValue[1] = 1;
    for (int i=2; i<=n; i++) phiValue[i] = i, cumulativePhi[i] = 0;

    cumulativePhi[1] = 2;
    for (int i=2; i<=n; i++) 
    {
        if (phiValue[i] == i) 
        {
            for (int j=i; j<=n; j+=i) phiValue[j] -= phiValue[j] / i;
        }
        cumulativePhi[i] =  cumulativePhi[i-1]+phiValue[i];
    }
}


int find_lower_bound(long long n)
{
    long long low = 0, high = 200000, mid;
    while(low<high)
    {
        mid = (low+high)/2;
        if(cumulativePhi[mid]<n) low = mid+1;
        else high = mid; 
    }

    return (int)low;
}


int main()
{
    //freopen("myfile.txt", "w", stdout);
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    sieve(sqrt(MAXN));
    phi_1_to_n(1000000);


    //for (int i=0; i<=20; i++) cout<<i<<"->"<<cumulativePhi[i]<<endl;

    //cout<<find_lower_bound(12)<<endl;

    int test, l, r;
    long long n;
    
    while(scanf("%lld",&n) && n!=0)
    {
        int index = find_lower_bound(n);
        int nth = n - cumulativePhi[index-1];
        int cou = 0;
        if(n==1) printf("0/1\n");
        else if(n==2) printf("1/1\n");
        else
        {
            for(int x=1; x<index; x++)
            {
                if(__gcd(index, x)==1) cou++;
                if(cou==nth)
                {
                    printf("%d/%d\n", x, index);
                    break;
                }
            }
        }
        
    }
    
    
    
    //printf("\n");

    return 0;
    
}




/*
Sample Input
2
2 10
100000 200000
Sample Output
22
1495105

strategy:
the start of the sequence looks like:
0/1, 1/1, 1/2, 1/3, 2/3, 1/4, 3/4, 1/5, 2/5, 3/5, 4/5, 1/6, 5/6, 1/7, . . .
here, fractions are built in this sequence by a number as a deniminator and it's co-prime as numerator
suppose for 5 fractions are (1/5, 2/5, 3/5, 4/5)- total four fractions
    where 5 is denominator always and numerators are its co-primes.

1 as denominator - will have 1 fractions -  same as phi of (1) //though 1 has extra one fraction(0/1)// we will count it separately
2 as denominator - will have 1 fractions -  same as phi of (2)
3 as denominator - will have 2 fractions -  same as phi of (3)
4 as denominator - will have 2 fractions -  same as phi of (4)
5 as denominator - will have 4 fractions -  same as phi of (5)
6 as denominator - will have 2 fractions -  same as phi of (6)

so how many fractions will be there?
 total fractions count = phi(1) + phi(2) + phi(3) + phi(4) + phi(5) + phi(6) + .......phi(n), n->200000
 to find nth fraction we can simply calculate running sum or cumulative sum   
    ->cumulativePhi[i] =  cumulativePhi[i-1]+phiValue[i];

1 has extra one fraction(0/1) so
change cumulativePhi[1] = 1 to 2, so cumulativePhi[1] = 2

when given an value of n then we just find the lower bound of given n, 
the lower bound index will be denominator of the nth fraction 

*/