#include <bits/stdc++.h>
using namespace std;
#define MAXN 2000000  
typedef long long ll;

ll convertNUm(string arr)
{
    ll ln = arr.size();
    ll ans = 0;
    for(ll i = 0; i < ln; i++) ans = ans * 2 + arr[i] - '0';
    return ans;
}

int main()
{

    // cout << stoi(binaryNumber, 0, 2);

    long long n, test, cou = 1;
    cin>>test;
    while(test--)
    {
        string str1, str2;
        cin>>str1>>str2;
        long long num1, num2;
        num1 = convertNUm(str1);
        num2 = convertNUm(str2);

        ll gcd = __gcd(num1, num2);
        if(gcd>1LL) printf("Pair #%d: All you need is love!\n", cou++);
        else printf("Pair #%d: Love is not all you need!\n", cou++);
    }
    return 0;
    
}




/*
Sample Input
5
11011
11000
11011
11001
111111
100
1000000000
110
1010
100

Sample Output
Pair #1: All you need is love!
Pair #2: Love is not all you need!
Pair #3: Love is not all you need!
Pair #4: All you need is love!
Pair #5: All you need is love!

*/