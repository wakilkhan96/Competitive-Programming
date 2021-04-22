#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int test, k, n;
    scanf ("%d", &test);
    while (test--)
    {
        scanf("%d", &k);
		if(k<0) k = -k;

		n = (-1 + sqrt(1+8*k))/2;

		if(n<1) n = 1;

        for (; ; n++)
        {
            int sum = n * (n + 1) / 2;
            if( sum >= k && (sum - k) % 2 == 0 ) break;
		}
		printf("%d\n", n);

		if(test) printf("\n");

    }
    return 0;
}




/*

Difficulty : easy



Solution Description :


Ad hoc math problem

1 + 2 + 3 + ..... + n = k
=> n*(n+1)/2 = k
=> n^2 + n - 2k = 0

So, n = {-1 + sqrt(1+8k)}/2

Using this equation you got the root of n

if n*(n+1)/2 equal k then print the root of n
Otherwise increment the root of n by 1 until (root*(root+1)/2 - k) is even

remember for positive of negative input always output is same output.

*/
