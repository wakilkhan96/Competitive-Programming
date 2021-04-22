#include <bits/stdc++.h>
using namespace std;

bitset<100100> bs;
vector<int> prime;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    prime.push_back(2);

    int sqrt_bound = sqrt(bound);
    for(int x=4; x<=bound; x+=2) bs[x] = 0;
    for(int x=3; x<=bound; x+=2)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back(x);
    }
}

vector<int> factors[10009];
void find_factors()
{
    for(int x=1; x<10009; x++)factors[x].clear();
    for(int x=1; x<10009; x++)
    {
        for(int y=x; y<10009; y+=x)
        {
            factors[y].push_back(x);
        }
    }
}



int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(100000 );
    //cout<<"done\n";
    find_factors();
    //cout<<"done\n";
    //cout<<factors[1].size()<<endl;
    //for(int i=2; i<10; i++) cout<<bs[i]<<endl;

    int test;
    cin>>test;

    while(test--)
    {
        int l, h, cou = 0;
        cin>>l>>h;
        bool space = false;
        for(int i=l; i<=h; i++)
        {
            int index = factors[i].size();
            if( bs[index] ==1)
            { 
                if(!space) space = true; 
                else printf(" ");

                printf("%d", i);
                cou++;
            }
            
        }
        if(cou==0) printf("-1");
        printf("\n");
    }
    //printf("\n");

    return 0;
    
}




/*

Sample Input
3
1 1
1 2
2 5
Sample Output
-1
2
2 3 4 5

strategy:
find out divisors
*/