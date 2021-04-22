#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define pb(x) push_back(x)

set<string> str_set;
///map<string, int> str_map;
vector<string> str_vector;


int elementExists( string str )
{
    int length = str_vector.size();
    for(int x=0; x<length; x++)
    {
        if(str==str_vector[x])
        {
            return x;
            break;
        }
    }

    return -1;
}


int main()
{
    str_set.clear();
    str_vector.clear();

    string str;
    while(getline(cin, str))
    {
        int length = str.length();
        string temp = "";
        int num = 0;
        for(int x=0; x<length+1; x++)
        {
            if( isalpha(str[x]) ) temp += str[x];
            else if( isdigit(str[x]) ) num = num*10 + (str[x]-'0');
            else
            {
                if( temp.length()>0 )
                {
                    int index = elementExists( temp );
                    if(index>-1)
                    {
                        str_vector.erase( str_vector.begin()+index );
                        str_vector.insert( str_vector.begin(), temp );
                    }
                    else str_vector.insert( str_vector.begin(), temp );

                    cout<<temp, temp = "";
                }
                if( num>0 )
                {
                    int index = elementExists( str_vector[num-1] );
                    cout<<str_vector[num-1], num = 0;
                    if(index>-1)
                    {
                        str_vector.erase( str_vector.begin()+index );
                        str_vector.insert( str_vector.begin(), temp );
                    }
                }

                cout<<str[x];
            }
        }

        cout<<endl;
    }


    return 0;
}

