
#include <bits/stdc++.h>
using namespace std;
#define maxN 100000; 

bitset<100100> bs;
vector<int> prime;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    for(int x=2; x<=bound; x++)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back(x);
    }
}


bool isPrimeNumber(int n)
{
    if(n<=100000) return bs[n];
    else
    {
        for(int x=0, lm = sqrt(n); x<prime.size() && prime[x]<=lm; x++)
        {
            if(n%prime[x]==0) return false;
        }
    }
    return true;
}

//https://en.wikipedia.org/wiki/Gaussian_integer
 bool GaussianPrime(int x, int y)
 {
    // norm = sqrt(x*x + y*y);
    int norm_square = x*x + y*y;
    if(x!=0 && y!=0) if(isPrimeNumber(norm_square)) return true;
    if(x==0) if(isPrimeNumber(abs(y)) && abs(y)%4==3) return true;
    if(y==0) if(isPrimeNumber(abs(x)) && abs(x)%4==3) return true;
    
    return false;
 }

int main()
{
    sieve(100000);
    int test;
    cin>>test;

    while(test--)
    {
        int x, y;
        cin>>x>>y;
        if(GaussianPrime(x, y)) printf("P\n");
        else printf("C\n");

    }

    return 0;
    
}




/*

Sample Input
6
2 0
3 0
5 0
13 0
3 1
10 1

Sample Output
C
P
C
C
C
P


*/

/*
Gaussian primes
https://en.wikipedia.org/wiki/Gaussian_integer

As the Gaussian integers form a principal ideal domain they form also a unique factorization domain. 
This implies that a Gaussian integer is irreducible (that is, it is not the product of two non-units) 
if and only if it is prime (that is, it generates a prime ideal).

The prime elements of Z[i] are also known as Gaussian primes. An associate of a Gaussian prime is also a Gaussian prime. 
The conjugate of a Gaussian prime is also a Gaussian prime (this implies that Gaussian primes are symmetric about 
the real and imaginary axes).

A positive integer is a Gaussian prime if and only if it is a prime number that is congruent to 3 modulo 4 (that is, 
it may be written 4n + 3, with n a nonnegative integer) (sequence A002145 in the OEIS). The other prime numbers are not Gaussian primes, 
but each is the product of two conjugate Gaussian primes.

A Gaussian integer a + bi is a Gaussian prime if and only if either:

one of a, b is zero and absolute value of the other is a prime number of the form 4n + 3 (with n a nonnegative integer), or
both are nonzero and a2 + b2 is a prime number (which will not be of the form 4n + 3).
In other words, a Gaussian integer is a Gaussian prime if and only if either its norm is a prime number, or it is the product of 
a unit (±1, ±i) and a prime number of the form 4n + 3.

It follows that there are three cases for the factorization of a prime number p in the Gaussian integers:

If p is congruent to 3 modulo 4, then it is a Gaussian prime; in the language of algebraic number theory, p is said to be inert in 
the Gaussian integers.
If p is congruent to 1 modulo 4, then it is the product of a Gaussian prime by its conjugate, both of which are non-associated 
Gaussian primes (neither is the product of the other by a unit); p is said to be a decomposed prime in the Gaussian integers. 
For example, 5 = (2 + i)(2 − i) and 13 = (3 + 2i)(3 − 2i).
If p = 2, we have 2 = (1 + i)(1 − i) = i(1 − i)2; that is, 2 is the product of the square of a Gaussian prime by a unit; 
it is the unique ramified prime in the Gaussian integers.


https://en.wikipedia.org/wiki/Gaussian_integer

*/