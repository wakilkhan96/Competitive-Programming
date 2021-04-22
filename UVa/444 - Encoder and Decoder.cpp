#include<bits/stdc++.h>
using namespace std;

void toString( string str )
{
    reverse(str.begin(), str.end());
    int length = str.length();

    int num = 0;
    for(int x=0; x<length; x++)
    {
        if(num<32) num = num*10 + (str[x]-'0');

        if(num>=32)
        {
            printf("%c", num);
            num  = 0;
        }
    }
    cout<<endl;
}


void toNumber( string str )
{
    int length = str.length();

    vector<char>v;
    for(int x=0; x<length; x++)
    {
        int num = str[x];
        int y =0 ;
        char ch[3];
        while(num)
        {
            int rem = num%10;
            ch[y++] = rem + '0';
            num = num/10;

        }
        for(int z=y-1; z>=0;z--) v.push_back(ch[z]);
    }

    length = v.size();
    for(int z=length-1; z>=0; z--) cout<<v[z];

    cout<<endl;
}



int main()
{
    string str;
    while(getline(cin, str))
    {
        if( isdigit( str[0] ) ) toString( str );
        else toNumber( str );
    }

    return 0;
}
