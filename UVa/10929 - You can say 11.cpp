#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        if(str=="0")break;
        int length = str.length();
        int num = 0;
        for(int x=0; x<length; x++)
        {
            num = num*10 + (str[x]-'0');
            num %= 11;
        }

        cout<<str;
        if(num==0) printf(" is a multiple of 11.\n");
        else printf(" is not a multiple of 11.\n");
    }

    return 0;
}
