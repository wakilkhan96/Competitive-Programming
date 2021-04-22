#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

bool isVarPresent [30];
int charValue [30];
int finalCharValue [30];

string make_fresh_and_reset( string input )
{
    for( int x=0; x<30; x++ ) charValue[x] = x+1, finalCharValue[x] = 0, isVarPresent[x] = false;

    string temp = "";
    int l = input.length();
    for( int x=0; x<l; x++ )
    {
        if( input[x] != ' ') temp.insert( temp.end(), input[x] );
        if( isalpha(input[x]) ) isVarPresent[ input[x]-'a' ] = true;
    }
    return temp;
}

int computedStringValue(string str)
{
    int value = 0;
    value  = charValue[ str[0]-'a' ];

    int length = str.length();
    for(int x=1; x<length-1; x+=2)
    {
        char sign = str[x];
        char num = str[x+1];

        if(sign=='+') value += charValue[ num-'a' ];
        else value -= charValue[ num-'a' ];
    }

    return value;

}


int main()
{
    int cou = 1;
    string input, expression;
    while( getline(cin, input) )
    {
        expression = input;
        input = make_fresh_and_reset( input );
        string str = input;
        int length  = str.length();

        ///removing pre-urinary statement
        for( int x=2; str[x]; x++ )
        {
            if( isalpha(str[x] ) &&  ( (str[x-1] == '+' && str[x-2] == '+')||(str[x-1] == '-' && str[x-2] == '-') )    )
            {
                if(str[x-1] == '+' && str[x-2] == '+') charValue[str[x]-'a']++;
                else if(str[x-1] == '-' && str[x-2] == '-') charValue[str[x]-'a']--;
                str.erase(str.begin()+x-1);
                str.erase(str.begin()+x-2);
                x--;
            }

        }

        ///cout<<str<<endl;//value of str after prefix operation
        for( int x=0; x<30; x++ ) finalCharValue[x] = charValue[x];

        ///removing post-urinary statement
        for( int x=0; x<length-2; x++ )
        {
            if( isalpha(str[x] ) &&  ( (str[x+1] == '+' && str[x+2] == '+')||(str[x+1] == '-' && str[x+2] == '-') )    )
            {
                if(str[x+1] == '+' && str[x+2] == '+') finalCharValue[str[x]-'a']++; /// value wont be changed as post statement
                else if(str[x+1] == '-' && str[x+2] == '-') finalCharValue[str[x]-'a']--;/// value wont be changed
                str.erase(str.begin()+x+2);
                str.erase(str.begin()+x+1);

            }

        }

        ///cout<<str<<endl;//value of str after prefix operation

        if(!isalpha( str[0] ) ) str.erase( str.begin() );
        if(!isalpha( str[str.length()-1] ) ) str.erase( str.end() );

        cout<<"Expression: "<<expression<<endl;
        cout<<"    value = "<<computedStringValue( str )<<endl;
        for( int x=0; x<30; x++ )
        {
            if ( isVarPresent[x] ) printf ("    %c = %d\n", x+'a', finalCharValue[x]);
        }


    }///end_while

    return 0;
}

