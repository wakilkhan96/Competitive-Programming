#include<bits/stdc++.h>
using namespace std;
bool semicolon_is_active;

void ContinuedFractionGenerator( int a, int b, int GCD )
{
    int rest = b;
    int x = a/rest;
    printf("%d",x);

    rest = a%rest;
    a = b;
    b = rest;
    if(a==GCD)return;


    if(semicolon_is_active) printf(";"), semicolon_is_active = false;
    else printf(",");

    ContinuedFractionGenerator(a, b, GCD);


}

int main()
{
    int numerator, denominator, a, b;
    while( scanf("%d %d", &numerator, &denominator)!=EOF )
    {
        a = numerator;
        b = denominator;
        printf("[");
        semicolon_is_active = true;
        ContinuedFractionGenerator( a, b, __gcd(a, b) );
        printf("]\n");
        semicolon_is_active = false;


    }


    return 0;
}
