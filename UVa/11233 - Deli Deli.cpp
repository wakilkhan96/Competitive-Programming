#include<bits/stdc++.h>
using namespace std;

bool isConsonant( char ch )
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return false;
    else return true;
}

int main()
{
    map<string, string> mp;
    int l, n;
    cin>>l>>n;
    cin.ignore(true, '\n');
    for(int x=0; x<l; x++)
    {
        string s1, s2;
        cin>>s1>>s2;
        //cout<<s1<<s2<<endl;
        mp[s1] = s2;
    }

    for(int x=0; x<n; x++)
    {
        string str;
        cin>>str;
        //cout<<str<<endl;
        if(mp.count(str))
        {
            cout<<mp[str]<<'\n';
        }
        else
        {
            int length = str.length();
            if(str[length-1]=='y')
            {
                if(length>1)
                {
                    if( isConsonant( str[length-2] ) )str[length-1]='i', str += "es";
                    else str += "s";
                }
                else str += "s";
            }
            else if(str[length-1]=='o' || str[length-1]=='s' || str[length-1]=='x' ) str += "es";
            else if(str[length-1]=='h')
            {
                if(length>1)
                {
                    if(str[length-2]=='s' || str[length-2]=='c') str += "es";
                    else str += "s";
                }
                else str += "s";
            }
            else str += "s";

            cout<<str<<'\n';

        }
    }

}
