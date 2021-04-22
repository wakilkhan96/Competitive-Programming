#include <bits/stdc++.h>
using namespace std;
 
int t;
long long n, m;
 
int main() 
{
	int cas = 0;
	scanf("%d", &t);
	while (t--) 
    {
		scanf("%lld%lld", &n, &m);
		printf("Case %d: %lld\n", ++cas, (n + m) / __gcd(n, m));
	}
	return 0;
}


/*
Solving Technique:

meaning of the questions: Given a 3 ^ n * 3 ^ m matrix, each priority requirements removed rows and columns priority back asked several times can be reinstated

ideas: how reasoning Unexpectedly, the answer is to find the law (n + m) / gcd (n, m), seen in topcoder a proof, for example the following:

We can associate at each cell a base 3-number, the log3(R) most significant digits is the index of the row of the cell and the log3(C) least significant digits is the index of his column.

What are the transformation now ?
position in row-major order is rC+c
position in column-major order is cR+r

We should shift down by log3(C) the most significant digits and shift up the least significant digits by log3(R).
C=3^6, R=3^4

now : rrrrcccccc (rrrr)(cccccc)
then: ccccccrrrr (cccc)(ccrrrr)

the first 4 digit are always the number of row (0-indexed) and the last 6 digit the number of column of the cell (0-indexed)
Now this process is valid for each possible r or c, so we can choose r=1 and c=0 and find a the length of this recurring cycle.
Calling L the length of this basic cycle, all other cycle are combination of this one so the only possible length are divisor of L, so the solution of our problem is (m+n)/L
rrrr=0001
cccccc=000000
day 0 : 0001000000 (0001)(000000)
day 1 : 0000000001 (0000)(000001)
day 2 : 0000010000 (0000)(010000)
day 3 : 0100000000 (0100)(000000)
day 4 : 0000000100 (0000)(000100)
day 5 : 0001000000 (0001)(000000)
For solving this problem we can find the the minimal x such that x*n mod (n+m)=0, this imply x=gcd(n, n+m)=gcd(n, m).
The solution of our original problem is (n+m)/x or (n+m)/gcd(n,m).

*/