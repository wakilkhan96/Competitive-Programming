#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

vector<string>value;

struct fraction
{
    int a;
    int b;
};

int toInteger( string str )
{
    bool negative = false;
    if(str[0]=='-') negative = true, str.erase( str.begin() );
    else if(str[0]=='+') str.erase( str.begin() );

    int num = 0;
    for(int x=0; str[x]; x++) num = num*10 + ( str[x]-'0');

    if(negative) return -num;
    else return num;
}


fraction simplifyFraction( string str)
{
    fraction obj;//declared structure object

    int length = str.length();
    bool hasHyphen = false, hasSlash = false;
    for(int x=0; x<length; x++)
    {
        if(str[x]=='/') hasSlash = true, str[x]= ' ';
        else if(str[x]=='-') hasHyphen = true, str[x]= ' ';
    }

    if(!hasSlash && !hasHyphen)
    {
        obj.a = toInteger( str );
        obj.b = 1;
    }
    else if( hasHyphen && hasSlash )
    {
        vector<string>temp;
        stringstream ss( str );
        string s;
        while(ss>>s)temp.push_back( s );
        int b = toInteger( temp[0] );
        int c = toInteger( temp[1] );
        int d = toInteger( temp[2] );

        obj.a = (b*d)+c;
        obj.b = d;
    }
    else if( hasSlash )
    {
        vector<string>temp;
        stringstream ss( str );
        string s;
        while(ss>>s)temp.push_back( s );
        int c = toInteger( temp[0] );
        int d = toInteger( temp[1] );

        obj.a = c;
        obj.b = d;
    }

    return obj;
}


bool isDigit(char ch)
{
    if(ch>='0' && ch<='9')return true;
    else return false;
}

string make_fresh( string str )
{
    int length;
    length = str.length();
    //cout<<str<<endl;

    int y = 0;
    while( y<length )
    {
        if(!isDigit( str[y]) ) str.erase( str.begin()+y );
        else break;
    }
    //cout<<str<<endl;

    y = str.length()-1;
    while( y>0 )
    {
        if(!isDigit( str[y]) ) str.erase( str.begin()+y ), y--;
        else break;
    }
    //cout<<str<<endl;

    length = str.length();
    for(int x=0; x<length; x++)
    {
        if( !(isDigit(str[x]) || str[x]=='-' || str[x]=='/' ) ) str[x] = ' ';
    }

    for(int x=1; x<str.length()-1; x++)
    {
        if( str[x]=='/' &&  ( !isDigit(str[x-1]) || !isDigit(str[x+1]) ) ) str.erase( str.begin()+x );
        else if( str[x]=='-' &&  ( !isDigit(str[x-1]) || !isDigit(str[x+1]) ) ) str.erase( str.begin()+x );
    }

    return str;
}


int main()
{
    int test;
    cin>>test;
    cin.ignore(true, '\n');

    while(test--)
    {
        value.clear();

        string str;
        getline(cin, str);
        str = make_fresh( str );
        //cout<<str<<endl;

        stringstream ss( str );
        string temp;
        while( ss>>temp) value.pb( temp );

//        cout<<value.size()<<endl;
//        for(int x=0; x<value.size(); x++) cout<<value[x]<<" ";
//        cout<<endl;

        int numerator = 1, denominator = 1;

        for(int x=0; x<value.size(); x++)
        {
            fraction obj = simplifyFraction( value[x] );
            //cout<<obj.a<<"/"<<obj.b<<endl;
            numerator = numerator * obj.a;
            denominator = denominator * obj.b;

            int GCD = 1;
            if( numerator>0 && denominator>0 )
            {
                GCD = __gcd(numerator, denominator);
                numerator /= GCD;
                denominator /= GCD;
            }

        }
        //cout<<numerator<<" "<<denominator<<endl;

        if(numerator==0 || denominator==0) cout<<"0"<<endl;
        else if(numerator==denominator) cout<<"1"<<endl;
        else if(numerator%denominator==0) cout<<numerator/denominator<<endl;
        else if(numerator<denominator) cout<<numerator<<"/"<<denominator<<endl;
        else cout<<numerator/denominator<<"-"<<numerator%denominator<<"/"<<denominator<<endl;


    }

    return 0;
}
