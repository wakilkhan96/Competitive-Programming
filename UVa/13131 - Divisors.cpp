#include<bits/stdc++.h>
using namespace std;

vector<int>d[500005];

void divisors()
{
    int i, j;
    for(i=1; i<=500002; i++)
    {
        for(j=i; j<=500002; j+=i)
        {
            d[j].push_back(i);
        }
    }
}

int main()
{
    int n, m, a, c, i, j;
    divisors();
    while(cin >> m)
    {
        for(j=1; j<=m; j++)
        {
            cin >> n >> a;
            c = 0;
            for(i=0; i<d[n].size(); i++)
            {
                if(d[n][i] % a != 0)
                {
                    c+=d[n][i];
                }
            }
            cout << c << endl;
        }
    }
    return 0;
}

