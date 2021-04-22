#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
vector<int> num;

int main()
{
    int n, k, m;
    while( cin>>n>>k>>m )
    {
        if( n+k+m == 0) break;

        num.clear();

        for(int x=0; x<=n+1; x++) num.push_back( x );
        //for(int x=0; x<=n; x++) cout<<num[x]<<" ";
        //cout<<endl<<"done"<<endl;
        int count = n;
        int a = 0; int b = n+1;
        while(count)
        {
            int _k = k, _m = m;
            while(_k)
            {
                a++;
                if(a>n) a=1;
                if(num[a]!=-1) _k--;
            }

            while(_m)
            {
                b--;
                if(b<1) b=n;
                if(num[b]!=-1) _m--;
            }


            ///now
            if(a==b)
            {
                printf("%3d", num[a] );
                count -= 1;
                num[a] = -1;
            }
            else if(a!=b)
            {
                printf("%3d%3d", num[a], num[b] );
                count -= 2;
                num[a] = -1;
                num[b] = -1;
            }

            if(count>0 && count<n)printf(",");

        }///end_of_while
        cout<<endl;


    }



    return 0;
}

