# include <stdio.h>
# include <math.h>
int main()
{
    long long test, s, n, troops;
    scanf("%lld", &test);

    while( test-- )
    {
        scanf("%lld", &troops);
        s = troops;
        n = ( -1 + sqrt( 1 + 8*s ) ) / 2;
        printf("%lld\n", n);
    }

    return 0;
}
