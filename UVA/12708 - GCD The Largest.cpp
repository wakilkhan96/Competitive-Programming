#include <bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("myfile.txt", "w", stdout);
    long long n,m;
    scanf("%llu", &n);
    while(n--)
    {
        scanf("%llu", &m);
        printf("%llu\n", m>>1);// m>>1 = m/2
    }
    return 0;
}


/*
Solving Technique:

For this problem we are to find the Greatest common divisor for all pairs of number between 1 to N. 
Where if a number if p. We exclude GCD between (p,p) pair. Because other than the reason it is omitted at the table, 
the main reason is GCD of (p,p) is also p.

Idea:

Generating a larger GCD board to get an idea:
1	 2	 3	 4	 5	 6	 7	 8
1								
2	 1							
3	 1	 1						
4	 1	 2	 1					
5	 1	 1	 1	 1				
6	 1	 2	 3	 2	 1			
7	 1	 1	 1	 1	 1	 1		
8	 1	 2	 1	 4	 1	 2	 1	

Since, whatever we calculate the upper or the lower half both will have mirror values.
 

>>optimization
In the ( 8 * 8 ) board the biggest number between all pairs from 1 to 8 is 4. 

How to find out biggest divisor excluding the number itself?
->find Prime Factrorization, then divide the number by smallest prime factor.
    ex, Number     prime factors    biggest divisor
         8   =      2                 8/2  = 4
        12   =      2, 3             12/2  = 6
        15   =      3, 5             15/3  = 5
        27   =      3                27/3  = 9
        17   =      17               17/17 = 1



-> for any number 1 to N, find biggest divisor of that numer=X, 
    if we take that number=X and tnat divisor as row and collumn, then
    In the ( N * N ) board the biggest GCD between all pairs from 1 to N is biggest divisor of number=X.
    where(number=x in range(1, N))

Similarly the answer is calculated for other inputs. 
->From this we see the pattern is that the answer is always floor of half of the input.

Input:

2
2
5
 

Output:

1
2

*/