#include<bits/stdc++.h>

using namespace std;
int size;


int k_value_checker(int rungsArr[], int k )
{
    int k_value = k;
    int len = size;

    for(int x=1; x<len; x++)
    {
        if( k_value <= 0 ||  rungsArr[x]-rungsArr[x-1] > k_value)
        {
            k_value = -1;
            break;
        }
        else if( rungsArr[x]-rungsArr[x-1] == k_value )k_value--;
    }

    return k_value;
}


int main()
{
    //freopen("outout.txt","w",stdout);
    //int rungsArr[] = {1, 6, 7, 11, 13};
    //int rungsArr[] = {3, 9, 10, 14};
    int test,cou = 1;
    scanf("%d",&test);


    while(test--)
    {
        int rungs;
        scanf("%d", &rungs);
        rungs++;
        int rungsArr[rungs];

        int maximum = 0;
        rungsArr[0] = 0;
        for(int x=1; x<rungs; x++)
        {
            scanf("%d", &rungsArr[x]);

            int diff = abs( rungsArr[x]-rungsArr[x-1] );
            maximum = (diff>maximum)? diff : maximum;

        }

        size = rungs;

        int low, mid, high;
        low = 0, mid = 0, high  = maximum+1;

        int steps = 100;
        while( steps-- )
        {
            mid = (low+high)/2;
            if( k_value_checker( rungsArr, mid ) > 0 ) high = mid;
            else low = mid+1;

        }

        printf("Case %d: %d\n", cou++, mid);

    }






    return 0;
}


