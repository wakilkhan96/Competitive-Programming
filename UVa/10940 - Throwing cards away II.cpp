#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

int arr[500020];

//just follow the pattern below main function
void compute( int bound )
{
    arr[1] = 1, arr[2] = 2;
    int n = bound, max_card = 4, card = 2;

    for( int x=3; x<n; x++, card += 2 )
    {
        arr[x] = card;
        if( card >= max_card )
        {
            card = 0;
            max_card = 2*max_card;
        }

    }


}

int main()
{
    compute( 500010 );
    int n;
    while(scanf("%d", &n))
    {
        if(n==0)return 0;
        else cout<<arr[n]<<'\n';

    }

    return 0;
}


/*
a pattern is found
Total Card -- Last Remaining Card
        1  --   1
        2  --   2

        3  --   2
        4  --   4

        5  --   2
        6  --   4
        7  --   6
        8  --   8

        9  --   2
        10  --   4
        11  --   6
        12  --   8
        13  --  10
        14  --  12
        15  --  14
        16  --  16

        17  --   2
        18  --   4
        19  --   6
        20  --   8
        21  --  10
        22  --  12
        23  --  14
        24  --  16
        25  --  18
        26  --  20
        27  --  22
        28  --  24
        29  --  26
        30  --  28
        31  --  30
        32  --  32
        33  --   2

        34  --   4
        35  --   6
        36  --   8
        37  --  10
        38  --  12
        39  --  14
        40  --  16
        41  --  18
        42  --  20
        43  --  22
        44  --  24
        45  --  26
        46  --  28
        47  --  30
        48  --  32
        49  --  34
        50  --  36
        51  --  38
        52  --  40
        53  --  42
        54  --  44
        55  --  46
        56  --  48
        57  --  50
        58  --  52
        59  --  54
        60  --  56
        61  --  58
        62  --  60
        63  --  62
        64  --  64

        65  --   2
        66  --   4
        67  --   6
        68  --   8
        69  --  10

*/
