#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

vector <string> LHS_str;///left hand side
vector <string> RHS_str;///right hand side

#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

vector<string> str;

string make_fresh( string str )
{
    int x;
    string temp = "";

    //first removing all spaces
    x = 0;
    for( ; x<str.length(); x++)
    {
        if( str[x] != ' ') temp.insert( temp.end(), str[x] );
    }

    str = temp;
    //cout<<str<<endl;

    ///now making sure everywhere excluding 0th place, there must be 2 operands
    x = 2;
    for( ; x<str.length()-1; x++)
    {
        if( (str[x-2]>='0' && str[x-2]<='9') && !(str[x-1]>='0' && str[x-1]<='9') && (str[x]>='0' && str[x]<='9')  )
        {
                //cout<<x<<"worked"<<str[x]<<endl;
            str.insert( str.begin()+x, '+' );
        }
    }

    //cout<<str<<endl;

    ///from here to down is neat and clean

    /// logic when arrives 2 of (+ or - or both) operand together
    x = 1;
    for( ; x<str.length()-1; x++)
    {
        if( (str[x]=='+'||str[x]=='-') && (str[x+1]=='+'||str[x+1]=='-')  )
        {
            if(str[x+1] != ' ') str.insert( str.begin()+x+1, ' ' );
            if(str[x-1] != ' ') str.insert( str.begin()+x, ' ' );
        }
        else if( str[x] == '=' )
        {
            if(str[x+1] != ' ') str.insert( str.begin()+x+1, ' ' );
            if(str[x-1] != ' ') str.insert( str.begin()+x, ' ' );
            break;
        }

    }

    //cout<<str<<endl;
    /// logic when arrives * or / operand
    x = 1;
    for( ; x<str.length()-1; x++)
    {
        if( str[x]=='*'||str[x]=='/')
        {
            if(str[x+1] != ' ') str.insert( str.begin()+x+1, ' ' );
            if(str[x-1] != ' ') str.insert( str.begin()+x, ' ' );
        }

    }

    //cout<<str<<endl;
    //removing + which adjacent to a number like: +4 becomes 4
    x = 1;
    for( ; x<str.length()-1; x++)
    {
        if( str[x-1]=='+' &&  ( str[x]>='0' && str[x]<='9' ) ) str.erase( str.begin()+x-1  );

    }

    //cout<<endl;


    return str;
}///End_of_fresh






string convertToString( int num )
{
    if(num==0) return "0";

    string str;
    bool negative = false;
    if(num<0) negative = true, num = -num;

    while(num)
    {
        int rest = num % 10;
        num = num / 10;
        str.insert( str.begin(), (rest+'0') );
    }

    if(negative) str.insert( str.begin(), '-' );

    return str;
}


int convertToInteger( string str )
{
    bool negative = false;
    if(str[0]=='-') negative = true, str.erase( str.begin() );
    else if(str[0]=='+') str.erase( str.begin() );

    int num = 0;
    for(int x=0; str[x]; x++) num = num*10 + ( str[x]-'0');

    if(negative) return -num;
    else return num;
}

void solveEquation(string s)
{
    if(s == "MultiplyDivide" )
    {
        int length = LHS_str.size();
        string sign = "";
        int x=1;
        for( ; x<length-1; x+=2)
        {
            if( LHS_str[x] == "*" || LHS_str[x] == "/" ) { sign = LHS_str[x]; break; }
        }

        int value1 = convertToInteger( LHS_str[x-1] );///value1 = -> the "value1" contains value before arithmetic ( * or / ) operator
        int value2 = convertToInteger( LHS_str[x+1] );///value2 = -> the "value2" contains value after arithmetic ( * or / ) operator
        int result = 0;
        if( sign == "*" ) result  = value1 * value2;
        else result  = value1 / value2;
        string result_str  = convertToString( result );

        LHS_str.erase( LHS_str.begin()+x );
        LHS_str.insert( LHS_str.begin()+x, result_str);
        LHS_str.erase( LHS_str.begin()+x+1 );
        LHS_str.erase( LHS_str.begin()+x-1 );

    }
    else if(s == "PlusMinus" )
    {
        int length = LHS_str.size();
        string sign = "";
        int x=1;
        for( ; x<length-1; x+=2)
        {
            if( LHS_str[x] == "+" || LHS_str[x] == "-" ) { sign = LHS_str[x]; break; }
        }

        int value1 = convertToInteger( LHS_str[x-1] );///value1 = -> the "value1" contains value before arithmetic ( * or / ) operator
        int value2 = convertToInteger( LHS_str[x+1] );///value2 = -> the "value2" contains value after arithmetic ( * or / ) operator
        int result = 0;
        if( sign == "+" ) result  = value1 + value2;
        else result  = value1 - value2;
        string result_str  = convertToString( result );

        LHS_str.erase( LHS_str.begin()+x );
        LHS_str.insert( LHS_str.begin()+x, result_str);
        LHS_str.erase( LHS_str.begin()+x+1 );
        LHS_str.erase( LHS_str.begin()+x-1 );

    }

    for(int x=0; x<LHS_str.size(); x++) cout<<LHS_str[x]<<" ";
    cout<<"= "<<RHS_str[0]<<endl;


}




int main()
{
    //freopen("output.txt","w",stdout);
    string input;
    while( getline(cin, input) )
    {
        input = make_fresh( input );
        cout<<input<<endl;
        LHS_str.clear();
        RHS_str.clear();
        stringstream ss( input );
        string temp;
        while( ss>>temp ) LHS_str.pb( temp );

        int hasPlusMinus = 0, hasMultiplyDivide = 0;

        int xx=0;
        for( ; xx<LHS_str.size(); xx++)
        {
            if( LHS_str[xx] == "=")break;
            else if( LHS_str[xx] == "+" || LHS_str[xx] == "-" ) hasPlusMinus++;
            else if( LHS_str[xx] == "*" || LHS_str[xx] == "/" ) hasMultiplyDivide++;
        }

        RHS_str.pb( LHS_str[ xx+1 ] );
        LHS_str.erase( LHS_str.begin()+xx, LHS_str.end() );

        while(hasMultiplyDivide--) solveEquation( "MultiplyDivide" );
        while(hasPlusMinus--) solveEquation( "PlusMinus" );


        cout<<endl;

    }

    return 0;
}

