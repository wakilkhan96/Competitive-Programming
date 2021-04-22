#include <bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("myfile.txt", "w", stdout);
    int test = 1, n, total, has[12], need[12];
    while( scanf("%d", &n) && n>-1 )
    {
        for(int x=0; x<12; x++) scanf("%d", &has[x]);
        for(int x=0; x<12; x++) scanf("%d", &need[x]);
        
        printf("Case %d:\n", test++);
        total = n;
        for(int x=0; x<12; x++)
        {
            if(total>=need[x])
            {
                printf("No problem! :D\n");
                total -= need[x];
            } 
            else printf("No problem. :(\n");
            total += has[x];
        }


    }
   
    return 0;
}


/*
Sample Input
5
3 0 3 5 8 2 1 0 3 5 6 9
0 0 10 2 6 4 1 0 1 1 2 2
-1
Sample Output
Case 1:
No problem! :D
No problem! :D
No problem. :(
No problem! :D
No problem! :D
No problem! :D
No problem! :D
No problem! :D
No problem! :D
No problem! :D
No problem! :D
No problem! :D
*/