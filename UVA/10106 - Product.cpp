#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))


string addStringModed(string a, string b)
{

    int a_length = a.length();
    int b_length = b.length();
    int diff = abs(a_length-b_length);

    if(a_length<b_length)
    {
        while(diff--) a += "0";
    }
    else if(b_length<a_length)
    {
        while(diff--) b += "0";
    }

    string ans = "";
    int sum = 0, rest = 0;
    for(int x=0; x<max(a_length, b_length); x++)
    {
        sum = (a[x]-'0') + (b[x]-'0') + rest;
        ans += (sum%10) + '0';
        rest = sum/10;
    }
    if(rest) ans += rest + '0';

    return ans;

}


string productString_and_String(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int a_length = a.length();
    int b_length = b.length();
    int diff = abs(a_length-b_length);
    if(a_length<b_length)
    {
        while(diff--)
            a += "0";
    }
    else if(b_length<a_length)
    {
        while(diff--)
            b += "0";
    }

    int length = max(a_length, b_length);

    string ans = "", result = "";

    int product = 0, rest = 0;
    int pos = 0;
    for(int x=0; x<length; x++)
    {
        result = "";
        for(int y=0; y<length; y++)
        {
            product = ((a[x]-'0')*(b[y]-'0')) + rest;
            result += (product%10) + '0';
            rest = product/10;
        }

        while(rest)
        {
            result += (rest%10) + '0';
            rest = rest/10;
        }

        for(int z=0; z<x; z++) result = "0" + result;

        ans = addStringModed(ans, result);

    }


    reverse(ans.begin(), ans.end());

    while(ans[0]=='0') ans.erase(ans.begin());
    if(ans.length()==0) ans += '0';

    return ans;

}

int main()
{
    string a, b;
    while(cin>>a)
    {
        cin>>b;
        cout<<productString_and_String(a, b)<<'\n';

    }
    //addString(a, b);

    return 0;
}
