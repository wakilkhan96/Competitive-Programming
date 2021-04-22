#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define fout freopen("output.txt","w",stdout);


char input [1000000];

int main ()
{
    while ( scanf ("%s", input) != EOF )
    {

        int len = strlen (input);

        list <char> output;

        list <char>::iterator it = output.begin();

        for( int i = 0; i < len; i++ )
        {
            if ( input [i] == '[' ) it = output.begin();
            else if ( input [i] == ']' ) it = output.end();
            else output.insert(it, input [i]);
        }

        for( it = output.begin(); it != output.end(); it++ ) printf ("%c", *it);

        printf ("\n");
    }

    return 0;
}

