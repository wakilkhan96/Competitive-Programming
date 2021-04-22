#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    while(n)
    {
        if(n%10 == 7) return 1;
        n /= 10;
    }
    return 0;
}
/// another pattern based problem, details under main function

int main()
{
    int test, n, m, k;
    while(true)
    {
        cin>>n>>m>>k;
        if(n+m+k==0) break;

        int cycle_len = 2*n-1;
        int _k = k, clap_count = 0;

        int pos1 = m,  pos2 = n+(n-m), ans = 0;
        //cout<<pos1<<" "<<pos2<<endl<<endl;

        if(_k && (pos1%7 == 0 || check(pos1)) ) _k--, clap_count++, ans = pos1;
        if(_k && (pos2%7 == 0 || check(pos2)) ) _k--, clap_count++, ans = pos2;
//        cout<<"pos - "<<pos1<<" "<<pos2<<endl;
//        cout<<"clap - "<<clap_count<<endl;
//        cout<<"_k - "<<_k<<endl;

        while( _k )
        {
            pos1 += cycle_len-1;
            pos2 += cycle_len-1;
            //cout<<pos1<<" "<<pos2<<endl;
            if(_k && (pos1%7 == 0 || check(pos1)) ) _k--, clap_count++, ans = pos1;
            if(_k && (m>1 && m<n) && (pos2%7 == 0 || check(pos2)) ) _k--, clap_count++, ans = pos2;

            if(clap_count>=k) break;

        }


        cout<<ans<<endl;

    }
    return 0;
}


/*
//editorial

suppose , n=4
so the pattern will be like ,
index      01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38
------------------------------------------------------------------------------------------------------------------------------------
pattern     1  2  3  4  3  2  1  2  3  4  3  2  1  2  3  4  3  2  1  2  3  4  3  2  1  2  3  4  3  2  1  2  3  4  3  2  1  2. . . . .

a cycle of length 2*n-1 for n,
index      01 02 03 04 05 06  07
----------------------------- --
pattern     1  2  3  4  3  2   1

a number " m " will come cyclically in a pattern after ( cycleLength - 1 ) indexes
when " m " is (m>1 && m<n), the number " m " comes twice in a cycleLength - 1,
but, if m==1 or m==n, it comes only once,

index      01 02 03 04 05 06   07           index      01 02 03 04 05 06
--------  -------------------  --           --------  -------------------
pattern     1  2  3  4  3  2    1           pattern     1  2  3  4  3  2
           -----------------------                     ------------------
                cycleLength                               cycleLength-1



we can find the place of occurrences of number " m ",

suppose , m=3, indexes containing " m " are given bar over index number
                 __    __          __    __          __    __          __    __          __    __          __    __
index      01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38
------------------------------------------------------------------------------------------------------------------------------------
pattern     1  2  3  4  3  2  1  2  3  4  3  2  1  2  3  4  3  2  1  2  3  4  3  2  1  2  3  4  3  2  1  2  3  4  3  2  1  2. . . . .

we can see that,
 for n=4,
    for m= 2, 3 , " m " comes twice in a cycleLength - 1,
    for m= 1, 4 , " m " comes once in a cycleLength - 1,

if n would be 6,
for n=6,
    for m= 2, 3, 4, 5 , " m " comes twice in a cycleLength - 1,
    for m= 1, 6 , " m " comes once in a cycleLength - 1,

    its a tricky logic, it is also used in program


*/





