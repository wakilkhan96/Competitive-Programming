#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, cou = 1;
    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &n);
        printf("Case #%d: %d", cou++, n);
        int cnt = 0;
        for(int i = 2; cnt < 2; i++)
        {
            if(n%i == 0)
            {
                printf(" = %d * %d", i, n/i);
                cnt++;
            }
        }
        puts("");
    }
    return 0;
}
