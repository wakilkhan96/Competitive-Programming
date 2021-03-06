#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))

typedef long long ll;

int main()
{
    ll t,test=0;
    scanf("%lld",&t);
    while(t--)
    {
        ll num;
        scanf("%lld",&num);
        ll ans=num*(num-1)/2; /// ans is maximum swaps
        printf("Case %lld: ", ++test);
        if (ans%2) printf("%lld/2\n", ans);
        else printf("%lld\n", ans/2);
    }
    return 0;
}



/*
How I solved the UVa 12004 - Bubble sort
Here's the Problem link. This blog entry is about how I solved the problem as it brought me lots of joy!

CAUTION: Read further only if you are stuck because the solution lies below. Beware of the spoiler below :-)

Inputs:
Max text cases 1000
each n will be 1<= n <= 100000

Output:
Average value of 'count' which is the number of swaps

Solution:
Number of permutations for 1 2 3 ... n = n!
To get to the average, we need to know the number of swaps and the frequencies of all the swaps so that
the we can multiply the number of swaps and the frequencies and divide by the factorial of the number.

So, a helper C++ implementation was created to print the number of swaps and the frequency of each swap using this format: Num swaps count~~frequency
1: # permutations= 1,       Num swaps count~~frequency for 1:,0~~1,
2: # permutations= 2,       Num swaps count~~frequency for 2:,0~~1,1~~1,
3: # permutations= 6,       Num swaps count~~frequency for 3:,0~~1,1~~2,2~~2,3~~1,
4: # permutations= 24,     Num swaps count~~frequency for 4:,0~~1,1~~3,2~~5,3~~6,4~~5,5~~3,6~~1,
5: # permutations= 120,   Num swaps count~~frequency for 5:,0~~1,1~~4,2~~9,3~~15,4~~20,5~~22,6~~20,7~~15,8~~9,9~~4,10~~1,
6: # permutations= 720,   Num swaps count~~frequency for 6:,0~~1,1~~5,2~~14,3~~29,4~~49,5~~71,6~~90,7~~101,8~~101,9~~90,10~~71,11~~49,12~~29,13~~14,14~~5,15~~1,
7: # permutations= 5040,    Num swaps count~~frequency for 7:,0~~1,1~~6,2~~20,3~~49,4~~98,5~~169,6~~259,7~~359,8~~455,9~~531,10~~573,11~~573,12~~531,13~~455,14~~359,15~~259,16~~169,17~~98,18~~49,19~~20,20~~6,21~~1,
8: # permutations= 40320,   Num swaps count~~frequency for 8:,0~~1,1~~7,2~~27,3~~76,4~~174,5~~343,6~~602,7~~961,8~~1415,9~~1940,10~~2493,11~~3017,12~~3450,13~~3736,14~~3836,15~~3736,16~~3450,17~~3017,18~~2493,19~~1940,20~~1415,21~~961,22~~602,23~~343,24~~174,25~~76,26~~27,27~~7,28~~1,
9: # permutations= 362880,  Num swaps count~~frequency for 9:,0~~1,1~~8,2~~35,3~~111,4~~285,5~~628,6~~1230,7~~2191,8~~3606,9~~5545,10~~8031,11~~11021,12~~14395,13~~17957,14~~21450,15~~24584,16~~27073,17~~28675,18~~29228,19~~28675,20~~27073,21~~24584,22~~21450,23~~17957,24~~14395,25~~11021,26~~8031,27~~5545,28~~3606,29~~2191,30~~1230,31~~628,32~~285,33~~111,34~~35,35~~8,36~~1,
10:# permutations= 3628800, Num swaps count~~frequency for 10:,0~~1,1~~9,2~~44,3~~155,4~~440,5~~1068,6~~2298,7~~4489,8~~8095,9~~13640,10~~21670,11~~32683,12~~47043,13~~64889,14~~86054,15~~110010,16~~135853,17~~162337,18~~187959,19~~211089,20~~230131,21~~243694,22~~250749,23~~250749,24~~243694,25~~230131,26~~211089,27~~187959,28~~162337,29~~135853,30~~110010,31~~86054,32~~64889,33~~47043,34~~32683,35~~21670,36~~13640,37~~8095,38~~4489,39~~2298,40~~1068,41~~440,42~~155,43~~44,44~~9,45~~1,

How to interpret the above data:
# permutations= 6,      Num swaps count~~frequency for 4:,0~~1,1~~3,2~~5,3~~6,4~~5,5~~3,6~~1,
0~~1 => 0 swaps occurs 1 times
1~~3 => 1 swaps occurs 3 times
2~~5 => 2 swaps occurs 5 times
3~~6 => 3 swaps occurs 6 times
4~~5 => 4 swaps occurs 5 times
5~~3 => 5 swaps occurs 3 times
6~~1 => 6 swaps occurs 1 times
The above data is generated using the following permutations of 1, 2, 3, 4
1, 2, 3, 4,
1, 2, 4, 3,
1, 3, 2, 4,
1, 3, 4, 2,
1, 4, 2, 3,
1, 4, 3, 2,
2, 1, 3, 4,
2, 1, 4, 3,
2, 3, 1, 4,
2, 3, 4, 1,
2, 4, 1, 3,
2, 4, 3, 1,
3, 1, 2, 4,
3, 1, 4, 2,
3, 2, 1, 4,
3, 2, 4, 1,
3, 4, 1, 2,
3, 4, 2, 1,
4, 1, 2, 3,
4, 1, 3, 2,
4, 2, 1, 3,
4, 2, 3, 1,
4, 3, 1, 2,
4, 3, 2, 1,
The permutations were generated using the next_permutation algorithm in C++ STL.

Doing a bit more math on:
0~~1 => 0 swaps occurs 1 times
1~~3 => 1 swaps occurs 3 times
2~~5 => 2 swaps occurs 5 times
3~~6 => 3 swaps occurs 6 times
4~~5 => 4 swaps occurs 5 times
5~~3 => 5 swaps occurs 3 times
6~~1 => 6 swaps occurs 1 times
-------------------------------
Adding up just the times: 1 + 3 + 5 + 6 + 5 + 3 + 1 = 24. Interestingly, that is the same as 4!
To get Average, first multiply the num swaps and frequency and add them all to get the numerator.
Numerator = (0*1 + 1*3 + 2*5 + 3*6 + 4*5 + 5*3 + 6*1)
Numerator = ( (6+0)*1 + (1+5)*3 + (2+4)*5 + 6*3) )
Numerator = ( (6*1 + 6*3 + 6*5 + 6*3) )
Numerator = ( 6* (1 + 3 + 5) + 6*3) )
Numerator = ( 3* (2*1 + 2*3 + 2*5) + 6*3)
Numerator = ( 3* (2*1 + 2*3 + 2*5 + 6))
Numerator = ( 3* (1 + 3 + 5 + 6 + 5 + 3 + 1))
Numerator = ( 3* (4!))

Denominator = n! = 4!

Avg = Numerator / Denominator
Avg = ( 3* (4!))/4! = 3
Observation: This is the same as (Max number of swaps / 2) = (6/2) = 3

Doing the same for 1 2 3 4 5
# permutations= 120,     Num swaps count~~frequency for 5:,0~~1,1~~4,2~~9,3~~15,4~~20,5~~22,6~~20,7~~15,8~~9,9~~4,10~~1,
Num permutations = 720
Swaps~~Times
0~~1,
1~~4,
2~~9,
3~~15,
4~~20,
5~~22,
6~~20,
7~~15,
8~~9,
9~~4,
10~~1,
Adding up the Times:
1 + 4 + 9 + 15 + 20 + 22 + 20 + 15 + 9 + 4 + 1 = 120 = 5!
To get Average, first multiply the num swaps and frequency and add them all to get the numerator.
Numerator = ( (0+10)*1 + (1+9)*4 + (2+8)*9 + (3+7)*15 + (4+6)*20 + (5)*22 )
Numerator = ( 10*(1 + 4 + 9 + 15 + 20) + (5)*22)
Numerator = ( 5* (2*1 + 2*4 + 2*9 + 2*15 + 2*20) + 5*22)
Numerator = ( 5* (2*1 + 2*4 + 2*9 + 2*15 + 2*20 + 22))
Numerator = ( 5* (1 + 4 + 9 + 15 + 20 + 22 + 20 + 15 + 9 + 4 + 1))
Numerator = ( 5* (5!))

Denominator = n! = 5!

Avg = Numerator / Denominator
Average = ( 5* (5!))/5! = 5
Observation: This is the same as (Max number of swaps / 2) = (10/2) = 5

Doing the same for 1 2 3 4 5 6:
# permutations= 720,    Num swaps count~~frequency for 6:,0~~1,1~~5,2~~14,3~~29,4~~49,5~~71,6~~90,7~~101,8~~101,9~~90,10~~71,11~~49,12~~29,13~~14,14~~5,15~~1,
Num permutations = 720
Swaps~~Times
0~~1,
1~~5,
2~~14,
3~~29,
4~~49,
5~~71,
6~~90,
7~~101,
8~~101,
9~~90,
10~~71,
11~~49,
12~~29,
13~~14,
14~~5,
15~~1,
Adding up the Times:
1 + 5 + 14 + 29 + +49 + 71 + 90 + 101 + 101 + 90 + 71 + 49 + +29 + 14 + 5 + 1 = 720 = 6!
To get Average, first multiply the num swaps and frequency and add them all to get the numerator.
Numerator = ((0+15)* 1 + (1+14)*5 + (2+13)*14 + (3+12)*29 + (4+11)*49 + (5+10)*71 + (6+9)*90 + (7+8)*101)
Numerator = ( 15*(1 + 5 + 14 + 29 + 49 + 71 + 90 + 101) )
Numerator = ( 15* ((1 + 5 + 14 + 29 + +49 + 71 + 90 + 101 + 101 + 90 + 71 + 49 + +29 + 14 + 5 + 1))/2 )
Numerator = ( 15* ((6!))/2)

Denominator = n! = 6!

Average = Numerator / Denominator
Average = ( 15* ((6!))/2)/6!
        = 15/2
Observation: This is the same as (Max number of swaps / 2) = (15/2)

Yet another observation:
Max number of swaps = n * (n - 1) / 2

What are these numbers:
1
1 + 1
1 + 2 + 2 + 1
1 + 3 + 5 + 6 + 5 + 3 + 1
1 + 4 + 9 + 15 + 20 + 22 + 20 + 15 + 9 + 4 + 1
1 + 5 + 14 + 29 + +49 + 71 + 90 + 101 + 101 + 90 + 71 + 49 + +29 + 14 + 5 + 1
If you Google this, you will be arriving at http://oeis.org/A008302 which is the Triangle of Mahonian numbers.
I saw some numbers, but until I summed them up, I did not realize they were adding up to n!

There was a bit of a detour too where I found out that the maximum coefficient of the Mahonian numbers is a
part of the http://oeis.org/A000140 which is Kendall-Mann numbers used in inversions!!!

Really great to know about the oeis.org - On-Line Encyclopedia of Integer Sequences!
Many thanks to Praveen for showing me the problem and for reviewing this blog enty.
One more spoiler: here's the source code.
Posted by raghav at 4:27 PM
Labels: 12004, Algorithm, solution, spoiler, UVA
*/
