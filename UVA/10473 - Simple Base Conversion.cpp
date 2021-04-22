#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))

int main()
{
    char str[15];
    int num;

    while(scanf("%s", str), str[0] != '-')
    {
        if(strlen(str) > 2 && (str[1] == 'x' || str[1] == 'X'))
        {
            sscanf(str, "%x", &num);
            printf("%d\n", num);
        }
        else
        {
            sscanf(str, "%d", &num);
            printf("0x%X\n", num);
        }
    }
    return 0;
}
