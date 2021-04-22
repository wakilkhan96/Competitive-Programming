#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n = 0;
    for(int x=0; x<=10; x++)
    {
        while( n++ )
        {
            double c = sqrt( n*(n+1) / 2 );
            if( c == (long)c )
            {
                printf("%10ld%10ld\n", (long) c, (long) n);
                break;
            }

        }

    }
}



/*
UVa 138: Street numbers

Process:
The O(N^2) approach to generating valid values for this problem will fail,
so we need a better alternative. We can do a bit of math to produce an equation that will benefit our calculations:

The summation from 1 to N is equal to N * (N + 1) / 2 (you can look this up if you do not believe me).
We are looking for a value C such that given
1 2 … C … N
the sums from 1 to C and C to N are equal.
We can define this mathematically as follows:
(C - 1) * C / 2 = N * (N + 1) / 2 - C * (C + 1) / 2
(C - 1) * C + C * (C + 1) = N * (N + 1)
C^2 - C + C^2 + C = N * (N + 1)
2 * C^2 = N * (N + 1)
C^2 = N * (N + 1) / 2

Thus, if there is an integer C such that the root of N * (N + 1) / 2 is an integer,
 the values C and N are a valid pair that satisfy the conditions.

Output:
-------

      6         8
      35        49
     204       288
    1189      1681
    6930      9800
   40391     57121
  235416    332928
 1372105   1940449
 7997214  11309768
46611179  65918161

*/
