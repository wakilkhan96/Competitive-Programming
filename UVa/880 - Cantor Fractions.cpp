#include<bits/stdc++.h>
using namespace std;
#define pb_pair(x, y) push_back( make_pair(x, y) )

vector < pair<long long ,long long> > range_of;
pair<long long ,long long> p;

///cant compute as previous problem, cause num range is not given , so n*(n+1)/2 may cause overflow

int main()
{
    //compute();
    //freopen("output.txt","w", stdout);

    long long term, n, start_range, end_range, numerator, denominator;
    while(cin>>term)
    {
        long long sum = 0;
        for(long long x=1; ; x++)
        {
            sum += x;
            if(sum >= term)
            {
                start_range = sum-x+1;
                end_range = sum;
                break;
            }
            //cout<<"loop "<<sum<<'\n';
        }


        denominator = abs(start_range - term) + 1;
        numerator = abs(end_range - term) + 1;


        printf("%lld/%lld\n", numerator, denominator);
    }

    return 0;
}
