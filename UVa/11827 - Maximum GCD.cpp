#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
vector<int> num;


int main()
{
    int test, cou = 1;
    scanf("%d", &test);
    cin.ignore(true, '\n');
    while( test-- )
    {
        string str;
        getline(cin, str);
        istringstream iss( str );
        int temp;
        num.clear();
        while(iss>>temp) num.pb( temp );
        int max_GCD = 0;
        int length = num.size();
        for(int x=0; x<length-1; x++)
        {
            for(int y=x+1; y<length; y++)
            {
                int gcd = __gcd(num[x], num[y]);
                max_GCD = (gcd>max_GCD)? gcd : max_GCD;
            }
        }
        cout<<max_GCD<<'\n';

    }

    return 0;
}

