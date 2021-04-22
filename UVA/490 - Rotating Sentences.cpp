#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y = 0, max_size = 0;
    int line[150];
    memset(line,0,sizeof(line));

    string input;
    vector<char>str[150];

    while( getline(cin, input) )
    {
        int length = input.length();
        line[y] = length;
        max_size = (max_size>length)? max_size : length;

        for(int x=0; x<length; x++)
        {
            str[y].push_back( input[x] );
        }

        y++;
    }


    for(int i=0; i<max_size; i++)
    {
        for(int j=y-1; j>=0; j--)
        {
            if( i<line[j] ) cout<<str[j][i];
            else cout<<" ";
        }

        cout<<endl;
    }


    return 0;
}
