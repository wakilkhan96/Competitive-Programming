#include<bits/stdc++.h>
using namespace std;

bool isValid( int n, int m )
{
    queue<int>city;
    for(int x=1; x<=n; x++) city.push( x );

    int cityCount = n;

    while( cityCount>1 )
    {
        city.pop();
        cityCount--;
        if(cityCount<=1) break;

        for(int x=0; x<m-1; x++)
        {
            int first = city.front();
            city.push( first );
            city.pop();

        }
    }

    int first = city.front();
    if(first == 2) return true;
    else return false;

}


int main()
{
    int n;
    while( cin>>n && n)
    {
        for(int x=2; ; x++)
        {
            if( isValid( n, x ) == true )
            {
                cout<<x<<endl;
                break;
            }

        }
    }
    return 0;
}
