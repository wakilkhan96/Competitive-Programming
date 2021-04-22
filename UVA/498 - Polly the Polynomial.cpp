#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    vector<int> c;
    vector<int> x;

    while( getline(cin, input) )
    {
        c.clear();
        x.clear();

        istringstream ss(input);
        int temp;
        while(ss>>temp) c.push_back( temp );

        getline(cin,input);
        istringstream ss2(input);
        int temp2;
        while(ss2>>temp2) x.push_back( temp2 );

        int n = c.size() - 1;

        for (int i=0, sz=x.size();    i<sz;   i++)
        {
            if( i>0 ) printf(" ");

            int result = 0;
            for (int j=0, sz2=c.size();   j<sz2;   j++)  result += c[j] * pow(x[i], n - j);

            printf("%d", result);
        }

        printf("\n");
    }

  return 0;
}
