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
        for(int n=f; n<1001; n += f)
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
    //     for(int y=0; y<factors[x].size(); y++)  cout<<factors[x][y]<<" ";
    //     cout<<" ->"<<sum_of_factors[x];
    //     cout<<endl;
    // }

    int n, tcase = 1;
    
    while(cin>>n)
    {
        if(n==0) break;
        int res = -1;
        for(int x=1000; x>=0 && res==-1; x--)
        {
            if(sum_of_factors[x]==n) res = x;
        }

        printf("Case %d: %d\n",tcase++, res);
    }
    //printf("\n");

    return 0;
    
}




/*

Sample Input
1
102
1000
0
Sample Output
Case 1: 1
Case 2: 101
Case 3: -1

*/