#include<bits/stdc++.h>
using namespace std;

bool validChar(char c)
{
    if(  (c>='A' && c<='Z') || (c>='a' && c<='z') || c=='-'  ) return true;
    else return false;
}

string make_fresh(string str)
{
    int len = str.length();
    for(int x=0; x<len; x++)
        if( !validChar( str[x] ) ) str[x] = ' ';

    return str;
}


string to_lower(string str)
{
    int len = str.length();
    for(int x=0; x<len; x++)
        if( str[x]>='A' && str[x]<='Z' ) str[x] += 32;

    return str;
}




int main()
{
    string str = "", temp_str = "";
    set<string>dictionary;
    set<string>::iterator it;
    string temp;
//scanf("%s", temp_str
    while( getline(cin, temp) )
    {
        temp = make_fresh( temp );

        stringstream ss(temp); // Used for breaking words
        string word; // To store individual words
        ///
        while (ss >> word)
        {
            temp_str = word;

            int str_len = str.length();

            if(str_len>=2)
            {
                if( validChar( str[str_len-2] )  &&  str[str_len-1]=='-' )
                {
                    str.erase( str.begin()+str_len-1 );
                    str = str + to_lower(temp_str);
                }
                else str = to_lower(temp_str);
            }
            else str = to_lower(temp_str);


            str_len = str.length();
            if( str[str_len-1]!='-' )
            {
                dictionary.insert( str );
            }

        }///


    }

    for(it = dictionary.begin();it!=dictionary.end();it++)
        cout<<*it<<endl;

    return 0;


}





