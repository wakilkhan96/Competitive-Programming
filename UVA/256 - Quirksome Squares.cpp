#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))


int main()
{
    vector<int> squares;
    for(int i = 0; i <= 10010; i++) squares.push_back(i * i);


    int n;
    while(cin>>n)
    {
        for(int i = 0; i < squares.size(); i++)
        {
            if( squares[i] >= (int) pow(10.0, n) ) break;

            int L = squares[i] / (int) pow(10.0, n/2);
            int R = squares[i] % (int) pow(10.0, n/2);

            if( (L+R)*(L+R)  == squares[i] ) cout << setw(n) << setfill('0') << squares[i] << endl;
        }
    }

    return 0;
}


/*
Process
This problem can be done easily by first generating the first 10000 squares and so
and evaluating the condition (a + b) ^ 2 == ab. The tricky part may be finding the values a and b.
I originally was looking for some kind of string manipulation solution, but i realized that given
the number of digits, using modulo division and division, we can determine the left and right numbers.
The left side of a 8 digit number is given by 12345678 / 10 ^ (8 / 2) and the right side is
given by 12345678 % 10 ^ (8 / 2). The same is true of 6, 4, and 2 digits by changing the value of
the power to # digits / 2. Given this, the problem devolves to checking whether
the left and right half summed and squared equals the square in question.
The other tricky part was outputting the leading zeros. The method I used was cin with a preset width and fill with "0".

 Sai Cheemalapati
 UVA 256: Quirksome squares

*/
