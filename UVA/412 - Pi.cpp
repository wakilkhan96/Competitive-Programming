#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, num[50];
    while(scanf("%d", &n) == 1 && n)
    {
        for(int x=0; x<n; x++) scanf("%d", &num[x]);
        int totalPairs = n*(n-1)/2; // nC2 = (n! / (n-2)!*2!) = (n*(n-1)*(n-2)! / (n-2)!*2!) =  n*(n-1)/2
        //cout<<totalPairs<<endl;
        int cou = 0;
        for(int x=0; x<n; x++)
        {
            for(int y=x+1; y<n; y++)
            {
                if( __gcd( num[x], num[y] ) == 1) cou++;
            }
        }
        //cout<<cou<<endl;
        if(cou==0) printf("No estimate for this data set.\n");
        else
        {
            double pi = sqrt((double)6.0*totalPairs/cou);
            printf("%.6lf\n", pi);
        }
    }
    return 0;
}
