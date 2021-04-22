#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))


int count(int n)
{
    char s[12];
    sprintf(s, "%d", n);

    int i, sum = 0;
    for(i = 0; s[i]; i++) sum += s[i]-'0';
    return sum;
}

int C( int n )
{
    int i, ans;
    bool n_is_prime = true; ///initially letting n is a prime, but if n has any divisor between 2 and sqrt(n),
                            ///then its not a prime, so it can be a smith number
    int digits_sum1 = count(n), digits_sum2 = 0;
    ans = n;
    for(i = 2; i <= (int)sqrt(n); i++)
    {
        if(n%i == 0)
        {
            int time = 0;
            while(n%i == 0)
            {
                time++;
                n /= i;
            }
            digits_sum2 += time*count(i);
            n_is_prime = false;
        }
    }

    if(n != 1) digits_sum2 += count(n);

    if(digits_sum1 == digits_sum2 && n_is_prime == false)
    {
        printf("%d\n", ans);
        return 1;
    }
    return 0;
}


int main()
{
    int i;
    int T, n;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        for(i = n+1; ; i++)
        {
            if(C(i) == 1) break;
        }
    }
    return 0;
}
