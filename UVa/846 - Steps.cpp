#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int test, num1, num2, diff, steps, n;
    scanf ("%d", &test);
    while (test--)
    {
        scanf ("%d%d", &num1, &num2);
        diff = num2-num1;
        if (diff == 0) printf("0\n");
        else
        {
            n = (int)sqrt (diff);
            diff -= n*n;
            if (diff == 0) steps = 2*n - 1;
            else if (diff <= n) steps = 2*n;
            else steps = 2*n + 1;

            printf("%d\n", steps);
        }

    }
    return 0;
}


/*
//editorial

We can pass various length at every step, like 1 1 1 2 3 2 1 ,
->but the thing to be noted is that we only can choose step length as previous steps or increased by 1 or decrease by 1.
 Let, previous step length = 3
 so next step length can be = 2, 3, 4  ,   where 2 = decrease by 1, 3 =  as previous step and 4 = increased by 1.
The tricky part is that we have to find out minimum steps. we can follow a pattern which increases by one and decreases by one and covers maximum length in those minimum steps
Like 1  2  3  2  1 ( like uva 12290 - Counting Game editorial)

    1  2  3  2  1  = sum is 9
   -- -- -- -- --
      5  steps,  covers length  = 9
 so we can say to cover maximum length 9 we have to take minimum 5 steps as following given condition

 after this is any distance is let left to cover   we will handle within if condition
*/
