#include<bits/stdc++.h>
using namespace std;
#define pb_pair(x, y) push_back( make_pair(x, y) )

vector < pair<int ,int> > range_of;
pair<int ,int> p;

void compute()
{
    int range = 5000;
    range_of.pb_pair(0,0);
    range_of.pb_pair(1,1);

    int starts, ends;
    for(int x=2; x<5000; x++)
    {
        p = range_of[x-1];
        starts = p.second+1;
        ends = x*(x+1)/2;
        range_of.pb_pair( starts, ends );
    }
}


int main()
{
    compute();

    //p = range_of[4472];
    //cout<<p.first<<" "<<p.second<<endl;

    int term, n, start_range, end_range, numerator, denominator;
    while(cin>>term)
    {
//        n = ceil( (-1 + sqrt(1+8*term))/2 );
//        if(n<0) n = 1;
        for(int x=1; x<5000; x++)
        {
            p = range_of[x];
            if(p.first<=term && term<=p.second)
            {
                //cout<<p.first<<" "<<p.second<<endl;
                n = x;
                start_range = p.first;
                end_range = p.second;
                break;
            }
        }

        if(n%2==0)
        {
            numerator = abs(start_range - term) + 1;
            denominator = abs(end_range - term) + 1;
        }
        else
        {
            denominator = abs(start_range - term) + 1;
            numerator = abs(end_range - term) + 1;
        }

        printf("TERM %d IS %d/%d\n", term, numerator, denominator);
    }

    return 0;
}



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
        - (t3)      - (t2)
        1           2

line 3,
        3           2           1
        - (t4)      - (t5)      - (t6)
        1           2           3

line 4,
        4            3           2           1
        - (t10)      - (t9)      - (t8)      - (t7)
        1            2           3           4


line 5,
        5            4            3            2            1
        - (t11)      - (t12)      - (t13)      - (t14)      -(t15)
        1            2            3            4            5


normally, we are seeing that, numerators are in range( line number  to 1 )
                            denominators are in range( 1 to line number )
                            like for line 5, numerator    5 4 3 2 1
                                             denominator  1 2 3 4 5

But, term numbers are different for odd line number (left to right) and even line number (right to left)
to make easy for programming logic, we may sort lines in terms of term numbers which only will start from left and ends to right

sorted lines in terms of "term number"----
line 1,
        1
        - (t1)
        1

line 2,
        1           2
        - (t2)      - (t3)
        2           1

line 3,
        3           2           1
        - (t4)      - (t5)      - (t6)
        1           2           3

line 4,
        1           2           3           4
        - (t7)      - (t8)      - (t9)      - (t10)
        4           3           2           1


line 5,
        5            4            3            2            1
        - (t11)      - (t12)      - (t13)      - (t14)      -(t15)
        1            2            3            4            5


now, we are seeing that, when sorted lines in terms of "term numbers",
then,
    for odd line numbers,   numerators are in range( line number  to 1 )
                            denominators are in range( 1 to line number )
                            like for line 5,    numerator    5 4 3 2 1
                                                denominator  1 2 3 4 5


    for even line numbers,   numerators are in range( 1 to line number )
                            denominators are in range( line number  to 1 )
                            like for line 4,    numerator    1 2 3 4
                                                denominator  4 3 2 1






part# 2


                                            01        line = 1

                                         03    02        line = 2

                                      04    05    06        line = 3

                                   10    09    08    07        line = 4

                                11    12    13    14    15        line = 5

>>when we are given a term number as input, all we have to do is, in which line number the input number fells in,

term numbers range for each line.......
line = 1, term numbers(1 to 1)
line = 2, term numbers(2 to 3)
line = 3, term numbers(4 to 6)
line = 4, term numbers(7 to 10)
line = 5, term numbers(11 to 15)
line = 6, term numbers(16 to 21)
line = 7, term numbers(22 to 28)

we can find out last number of a range for a definite line number by n*(n+1)/2
like, for line = 6, last number of the range = 6*(6+1)/2 = 21
like, for line = 7, last number of the range = 7*(7+1)/2 = 28

we used , " compute() " function to find these range for every distinct line number

suppose, n = line number;
        start_range = first number of the range
        end_range = last number of the range;
        term = given term number

        if(n%2==0)
        {
            numerator = abs(start_range - term) + 1;
            denominator = abs(end_range - term) + 1;
        }
        else
        {
            denominator = abs(start_range - term) + 1;
            numerator = abs(end_range - term) + 1;
        }



*/
