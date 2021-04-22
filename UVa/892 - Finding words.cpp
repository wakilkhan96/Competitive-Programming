#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define pb(x) push_back(x)


int main()
{

    string str = "", previous = "";
    bool hasHyphen = false;

    while(getline(cin, str))
    {
        if(str == "#")return 0;

        if(hasHyphen)
        {
            str = previous + str;
            int l = str.length();
            int x=0;
            for( ; x<l; x++)
            {
                if( isalpha(str[x]) ) cout<<str[x];
                else break;
            }
            cout<<endl;
            str.erase(str.begin(), str.begin()+x );

            previous = "";
            hasHyphen = false;
        }

        int length = str.length();
        int len = length;

        if( str[length-1] == '-' )
        {
            hasHyphen = true;
            int y = length-2;
            while( y>=0 && isalpha( str[y] ) ) y--;
            len = y+1;
            for(int x=len; x<length-1; x++) previous.insert( previous.end(), str[x] );
        }

        for(int x=0; x<len; x++)
        {
            if( isalpha(str[x]) || str[x] == ' ' ) cout<<str[x];
        }
        cout<<endl;

    }





    return 0;
}

