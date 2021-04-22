#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

int toInt( char ch )
{
    if(ch=='A') return 10;
    else if(ch=='B') return 11;
    else if(ch=='C') return 12;
    else if(ch=='D') return 13;
    else if(ch=='E') return 14;
    else if(ch=='F') return 15;
}

int hexadecimalToDecimal( string str )
{
    int length = str.length();
    int num = 0;
    for(int x=0; x<length; x++)
    {
        int value = ( isdigit(str[x]) )? str[x]-'0' : toInt( str[x] );
        num  += value * pow( 16.0,  length-x-1);
    }

    return num;
}


string decimalToBinary( int num )
{
    ///13 bit binary representation
    string str = "";
    int arr[13];
    for(int x=0; x<13; x++)
    {
        arr[x] = pow(2.0,12-x);
    }
    for(int x=0; x<13; x++)
    {
        string bit = "0";
        if(num>=arr[x])
        {
            bit = "1";
            num -= arr[x];
        }

        str  += bit;

    }

    return str;
}

int main()
{
    int n;
    cin>>n;

    while( n-- )
    {
        string first, sign, second;
        cin>>first>>sign>>second;
        //cout<<first<<sign<<second<<endl;
        int first_num = hexadecimalToDecimal( first );
        int second_num = hexadecimalToDecimal( second );

        cout<<decimalToBinary( first_num )<<" "<<sign<<" "<<decimalToBinary( second_num )<<" = ";
        if(sign=="+") cout<<first_num+second_num;
        else cout<<first_num-second_num;
        printf("\n");

    }

    return 0;
}

