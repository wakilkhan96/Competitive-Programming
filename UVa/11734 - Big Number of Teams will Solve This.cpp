#include<bits/stdc++.h>
using namespace std;

/*
Case 1: Yes
Case 2: Wrong Answer
Case 3: Output Format Error

*/
string make_fresh( string str )
{
    string temp = str;
    int length = str.length();
    str = "";
    for(int x=0; x<length; x++)
    {
        if(temp[x]!=' ') str += temp[x];
    }
    return str;
}



int main()
{
    int test, cou = 1;
    cin>>test;
    cin.ignore(true, '\n');

    while(test--)
    {
        string str_team;
        string str_judge;
        getline(cin, str_team);
        getline(cin, str_judge);

        printf("Case %d: ", cou++);
        if( str_judge==str_team ) printf("Yes\n");
        else if( make_fresh(str_judge)==make_fresh(str_team ) ) printf("Output Format Error\n");
        else printf("Wrong Answer\n");

    }


    return 0;
}
