#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
string str;

int repeatsAfterIterations(int key[], int n, int k, string st )
{
    string str_given = st;
    string temp = st;
    int iteration = 0;
    while( true )
    {
        for(int x=1; x<n+1; x++)
        {
            temp[ key[x] ] = st[x];
        }

        st  = temp;

        //cout<<str<<endl;
        iteration++;
        if( temp==str_given )break;
        if(iteration>=k)
        {
            str = st;
            iteration = k;
            break;
        }

    }

    return iteration;
}

int main()
{
    //freopen("output.txt","w",stdout);
    int n, k;
    while( cin>>n )
    {
        if(!n) break;
        cin.ignore(true, '\n');

        int key[n+1];
        key[0] = 0;
        for(int x=1; x<n+1; x++) scanf("%d", &key[x]);
        while( cin>>k )
        {
            if(!k) break;
            cin.ignore(true, '\n');

            str = "";
            getline(cin, str);

            int length = str.length();
            if(length<n)
            {
                for(int x=0; x<n-length; x++) str = str + ' ';
            }

            str = ' ' + str;
            length = str.length();
            //cout<<length<<endl;

            int it = repeatsAfterIterations( key, n, k, str );
            //cout<<str<<" - iteration taken - "<<it<<"\n";

            k = k % it;
            string temp = str;
            while(k--)
            {
                for(int x=1; x<n+1; x++)
                {
                    temp[ key[x] ] = str[x];
                }

                str  = temp;
            }

            str.erase( str.begin() );
            cout<<str<<"\n";

        }
    }

    return 0;
}
