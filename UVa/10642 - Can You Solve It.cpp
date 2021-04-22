#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x1, y1, x2, y2, distance = 0;
    int test, cou = 1;
    cin>>test;
    while(test--)
    {
        cin>>x1>>y1>>x2>>y2;
        if( x1+y1>x2+y2 || ( (x1+y1==x2+y2) && x1>x2 ) )  swap(x1, x2), swap(y1, y2);

        long long line1 = x1+y1+1;
        long long line2 = x2+y2+1;
        //cout<<line1<<endl;
        //cout<<line2<<endl;

        distance = 0;
        distance += line1-x1;
        //cout<<distance<<endl;
        if(line1!=line2)distance += line2-y2-1;
        else distance -= y2;
        //cout<<distance<<endl;

        if(line1==line2) distance--;
        if(distance<0) distance = 0;

        for(long long x=line1+1; x<line2; x++) distance += x;

        printf("Case %d: %lld\n", cou++, distance);

    }

    return 0;
}



/*
previous solution works also but gets runtime error due to integer overflow when compute working for big number

#include<bits/stdc++.h>
using namespace std;
#define pb_pair(x, y) push_back( make_pair(x, y) )

vector < pair<long long, long long> > range_of;
pair<long long ,long long> p;

void compute()
{
    long long range = 20010;
    range_of.pb_pair(0,0);
    range_of.pb_pair(1,1);

    long long starts, ends, sum = 1;
    for(long long x=2; x<20010; x++)
    {
        sum += x;
        starts = sum-x+1;
        ends = sum;
        range_of.pb_pair( starts, ends );
    }

}


int main()
{
    compute();

    long long x1, y1, x2, y2, x1y1_to_num, x2y2_to_num;
    int test, cou = 1;
    cin>>test;
    while(test--)
    {
        cin>>x1>>y1>>x2>>y2;
        int line1 = x1+y1+1;
        int line2 = x2+y2+1;
        p = range_of[line1];
        x1y1_to_num = p.first + x1;
        p = range_of[line2];
        x2y2_to_num = p.first + x2;

        //cout<<abs(x1y1_to_num-x2y2_to_num)<<endl;
        printf("Case %d: %lld\n", cou++, abs(x1y1_to_num-x2y2_to_num));

    }

    return 0;
}



*/


/*
the grid of term values

1/1  1/2  1/3  1/4  1/5 . . .

2/1  2/2  2/3  2/4

3/1  3/2  3/3

4/1  4/2

5/1


In the above diagram, the first term is 1/1, the second term is 1/2, the third term is 2/1, the fourth
term is 3/1, the fifth term is 2/2, the sixth term is 1/3, the seventh term is 1/4, the eighth term is 2/3,
the ninth term is 3/2, the tenth term is 4/1, the eleventh term is 5/1, the twelfth term is 4/2,and so on.


so, we can build a grid of n'th term --

01    02    06    07    15    16    28    29     45    46    ..

03    05    08    14    17    27    30    ..    ..    ..

04    09    13    18    26    31    ..    ..    ..

10    12    19    25    32    ..    ..    ..

11    20    24    33    ..    ..    ..

21    23    34    ..    ..    ..

22    35    ..    ..    ..

36    38    ..    ..

37    ..    ..

55    ..

..

now, so, we can turn the grid of n'th term --

                                            01        line = 1

                                         03    02        line = 2

                                      04    05    06        line = 3

                                   10    09    08    07        line = 4

                                11    12    13    14    15        line = 5

                             21    20    19    18    17    16        line = 6

                          22    23    24    25    26    27    28        line = 7

                       36    35    34    33    32    31    30    29        line = 8

                    37    38    39    40    41    42    43    44    45        line = 9

                 55    54    53    52    51    50    49    48    47    46        line = 10

              ..    ..    ..    ..    ..    ..    ..    ..    ..    ..    ..

           ..    ..    ..    ..    ..    ..    ..    ..    ..    ..    ..    ..        line = n





and the  term values are....

                                            1/1        line = 1

                                         2/1    1/2        line = 2

                                      3/1    2/2    1/3        line = 3

                                   4/1    3/2    2/3    1/4        line = 4

                                5/1    4/2    3/3    2/4    1/5        line = 5


we can simplify lines,
    " (tn) - is (Term n) "
line 1,
        1
        - (t1)
        1

line 2,
        2           1
        - (t2)      - (t3)
        1           2

line 3,
        3           2           1
        - (t4)      - (t5)      - (t6)
        1           2           3

line 4,
        4            3           2           1
        - (t7)      - (t8)      - (t9)      - (t10)
        1            2           3           4


line 5,
        5            4            3            2            1
        - (t11)      - (t12)      - (t13)      - (t14)      -(t15)
        1            2            3            4            5


normally, we are seeing that, numerators are in range( line number  to 1 )
                            denominators are in range( 1 to line number )
                            like for line 5, numerator    5 4 3 2 1
                                             denominator  1 2 3 4 5




*/

