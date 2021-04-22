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


class sign_multiplier
{
    public:
    char sign;
};
sign_multiplier operator * (sign_multiplier sign1, sign_multiplier sign2)
{
    sign_multiplier obj;
    char ch;
    if(sign1.sign == '-')
    {
        if(sign2.sign == '-') ch = '+';
        else ch = '-';
    }
    else ch = sign2.sign;

    obj.sign = ch;
    return obj;
}

char sign_of_term_1_by_i(int n)
{
    char ch;
    if(n==2) ch = '+';
    else if(bs[n] && (n+1)%4==0) ch = '+';
    else if(bs[n] && (n-1)%4==0) ch = '-';
    return ch;
}
//printf("+\n");
int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(100000);

    int test, i;
    cin>>test;

    while(test--)
    {
        cin>>i;
        if( bs[i] ) printf("%c\n", sign_of_term_1_by_i(i));
        else
        {
            vector<int> factors;
            factors.clear();
            for(int x=0; x<prime.size() && prime[x]<=i && i!=1; x++)
            {
                while(i%prime[x]==0) i /= prime[x], factors.push_back(prime[x]);
            }

            sign_multiplier final_sign, tmp_sign;
            final_sign.sign = '+';

            for(int x=0; x<factors.size(); x++)
            {
                tmp_sign.sign = sign_of_term_1_by_i(factors[x]);
                final_sign.sign = (final_sign*tmp_sign).sign;
            }

            printf("%c\n", final_sign.sign);
        }
    }
   
    

    
    return 0;
    
}




/*

Sample Input
6
2
13
45
87
88
100000
Sample Output
+
-
-
-
+
-


*/