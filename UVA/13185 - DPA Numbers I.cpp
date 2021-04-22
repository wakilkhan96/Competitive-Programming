#include <bits/stdc++.h>
using namespace std;

vector<int> factors[1001];
vector<int> sum_of_factors(1001, 0);

void push_and_sum(int number, int factor)
{
    factors[number].push_back(factor);
    sum_of_factors[number] += factor;
}

void generate_factors()
{
    for(int f=1; f<10001; f++)
    {
        for(int n=2*f; n<1001; n += f)
        {
            //factors[n].push_back(f);
            push_and_sum(n, f);
        }
    }
}


int main()
{
    //freopen("myfile.txt", "w", stdout);
    generate_factors();
    //cout<<"done"<<endl;
    // for(int x=0; x<1001; x++)
    // {
    //     cout<<x<<" ->";
    //     for(int y=0; y<factors[x].size(); y++)  cout<<factors[x][y]<<" ";
    //     cout<<" ->"<<sum_of_factors[x];
    //     cout<<endl;
    // }

    int n, test, tcase = 1;
    cin>>test;
    while(test--)
    {
        cin>>n;
        if(sum_of_factors[n]>n) printf("abundant\n");
        else if(sum_of_factors[n]<n) printf("deficient\n");
        else printf("perfect\n");
    }
    //printf("\n");

    return 0;
    
}




/*

Sample Input
10
5
6
16
18
21
28
29
30
40
43
Sample Output
deficient
perfect
deficient
abundant
deficient
perfect
deficient
abundant
abundant
deficient

*/