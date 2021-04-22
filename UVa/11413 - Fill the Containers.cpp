#include <bits/stdc++.h>
using namespace std;

int totalVessel = 0;

int containerNeeded(int vesselArr[], int capacity)
{
    int count= 1;
    int filled = 0;

    for(int x=0; x<totalVessel; x++)
    {
        if( vesselArr[x]> capacity)
        {
            count = INT_MAX; return count;
        }


        if( filled + vesselArr[x] <= capacity )
        {
            filled += vesselArr[x];
        }
        else
        {
            count++;
            filled = vesselArr[x];
        }
//            if(vesselArr[x]>capacity) return INT_MAX;
//            if(filled+vesselArr[x]<=capacity) filled+=vesselArr[x];
//            else filled=vesselArr[x],count++;

    }

    return count;

}



int main()
{

    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int vessel,container;

    while ( scanf("%d %d", &vessel, &container)!=EOF )
    {
        totalVessel = vessel;

        int vesselArr[vessel], total = 0;

        for(int x=0; x<vessel; x++ )
            scanf("%d", &vesselArr[x]), total += vesselArr[x];

        int steps = 100;
        int low = 0, mid = 0, high = total;
        while( steps-- )
        {
            mid = (low +high)/2;
            int capacity = mid;
            if( containerNeeded( vesselArr, capacity ) == container ) high = mid; ///to get lower bound

            if( containerNeeded( vesselArr, capacity ) < container ) high = mid; ///means if i need less container than given container limit
                                                                                ///then i have decrease container size or capacity
            else if( containerNeeded( vesselArr, capacity ) > container ) low = mid + 1;
        }

        printf("%d\n", mid );





    }





}
