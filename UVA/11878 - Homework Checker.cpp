#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

int toInt(string str)
{
    int length = str.length();
    int value = 0;
    for(int x=0; x<length; x++) value = value*10 + (str[x] - '0');
    return value;
}

int main()
{
    string input;
    int cou = 0;
    while(getline(cin,input))
    {
        bool _minus = false, _plus = false;
        int len = input.length();
        for(int x=0; x<len; x++)
        {
            if(input[x]=='-') _minus = true, input[x] = ' ';
            else if(input[x]=='+') _plus = true, input[x] = ' ';
            else if(input[x]=='=') input[x] = ' ';
        }
        string temp_str = input;
        stringstream ss(temp_str);
        string temp;

        vector<string> str;

        while( ss>>temp ) str.pb(temp);

        int value1, value2, ans;
        value1 = toInt( str[0] );
        value2 = toInt( str[1] );
        if(str[2]!="?")
        {
            ans = toInt( str[2] );
        }

        if(value1 + value2 == ans &&  _plus) cou++;

        if(value1- value2 == ans  &&  _minus) cou++;

    }

    cout<<cou<<endl;

    return 0;
}

