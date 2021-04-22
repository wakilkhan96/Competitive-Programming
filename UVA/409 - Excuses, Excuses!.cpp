#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

vector<string>keyword;
vector<string>excuse[30];

string make_fresh( string str )
{
    int length = str.length();

    for(int x=0; x<length; x++)
    {
        if( !isalpha( str[x] ) ) str[x] = ' ';
    }

    return str;
}


string toLowerCase( string str )
{
    int length =  str.length();
    for(int x=0; x<length; x++)
    {
        if( isalpha(str[x]) ) str[x] = tolower( str[x] );
    }
    return str;
}

int main()
{
    int k, e, cou = 1;

    while( scanf( "%d %d", &k, &e )==2 )
    {
        cin.ignore(true, '\n');
        keyword.clear();
        for(int x=0; x<e; x++) excuse[x].clear();


        for(int x=0; x<k; x++)
        {
            string temp;
            cin>>temp;
            cin.ignore(true, '\n');
            keyword.pb( temp );
        }
        //cin.ignore(true, '\n');

        for(int x=0; x<e; x++)
        {
            string temp;
            getline(cin, temp);
            excuse[x].pb( temp );
        }


    //        for(int x=0; x<k; x++) cout<<keyword[x]<<endl;
    //cout<<"------";
    //        for(int x=0; x<e; x++) cout<<excuse[x][0]<<endl;
        int excuseCount[30];
        memset(excuseCount,0,sizeof(excuseCount));

        for(int x=0; x<e; x++)
        {
            string str = excuse[x][0];
            str = make_fresh( str );

            stringstream ss( str );
            string s;
            while( ss>>s )
            {
                if(s==" ")continue;
                s = toLowerCase( s );

                for(int y=0; y<k; y++)
                {
                    string temp;
                    temp = keyword[y];
                    if( s == temp )
                    {
                            excuseCount[x]++;
                            break;
                    }
                }

            }///end_of_stringstream

        }///end_of_for

        int maX = 0;
        for(int x=0; x<e; x++) maX  = (excuseCount[x]>maX)? excuseCount[x] : maX;

        cout<<"Excuse Set #"<<cou++<<endl;
        for(int x=0; x<e; x++)
        {
            if( excuseCount[x] == maX ) cout<<excuse[x][0]<<endl;
        }
        cout<<endl;


    }


    return 0;
}

