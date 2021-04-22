#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

vector<string>LHS_str;
vector<string>RHS_str;

bool isPlusMinus(char ch)
{

    if( ch=='+' || ch=='-' )return true;
    else return false;
}

string make_fresh( string str )
{
    int equalSignLocation = 0;

    for(int x=1; x<str.length()-1; x++)
    {
        if( ( !isPlusMinus(str[x-1]) && isPlusMinus(str[x]) && !isPlusMinus(str[x+1]) ) && (str[x-1]!='=' && str[x+1]!='='  )  )
        {
            //if( str[x+1]!=' ' ) str.insert( str.begin()+x+1, ' ');
            if( str[x-1]!=' ' ) str.insert( str.begin()+x, ' ');
        }
        else if( str[x]=='=' ) equalSignLocation = x;

    }

    if( str[equalSignLocation+1]!=' ' )str.insert( str.begin()+equalSignLocation+1, ' ');
    if( str[equalSignLocation-1]!=' ' )str.insert( str.begin()+equalSignLocation, ' ');

    return str;
}


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


int main()
{
    ///freopen("output.txt","w",stdout);

    int test;
    cin>>test;
    string str;
    cin.ignore(100,'\n');
    while( test-- )
    {
        getline(cin, str);
        str = make_fresh( str );

        LHS_str.clear();
        RHS_str.clear();

        bool gotEqualSign = false;
        stringstream ss( str );
        string temp;
        while( ss>>temp )
        {
            if( temp == "=" ) gotEqualSign = true;
            else if( gotEqualSign ) RHS_str.pb( temp );
            else LHS_str.pb( temp );
        }
        gotEqualSign = false;

        int xValue = 0;
        int constantValue = 0;

        ///lets move all parts to only LHS(Left Hand Side)
        /// like >> 2x-4+5x+300=98x will become >> 2x-4+5x+300-98x=0 after this potion
        for(int x=0; x<LHS_str.size(); x++)
        {
            string s = LHS_str[x];
            int len = s.length();
            if(s[len-1]=='x')
            {
                s.erase( s.end()-1 );

                if(s.length()<=1) /// making sure when removing "x" the "s" is not empty valued
                {
                    if(s.length()==0) s.insert( s.end(), '1');
                    else if(s.length()==1 && isPlusMinus( s[0] ) )s.insert( s.end(), '1');
                }

                xValue += toInteger( s );
            }
            else constantValue += toInteger( s );

        }

        for(int x=0; x<RHS_str.size(); x++)
        {
            string s = RHS_str[x];
            int len = s.length();
            if(s[len-1]=='x')
            {
                s.erase( s.end()-1 );

                if(s.length()<=1) /// making sure when removing "x" the "s" is not empty valued
                {
                    if(s.length()==0) s.insert( s.end(), '1');
                    else if(s.length()==1 && isPlusMinus( s[0] ) )s.insert( s.end(), '1');
                }

                xValue += -1*toInteger( s );
            }
            else constantValue += -1*toInteger( s );

        }

//        for(int x=0; x<LHS_str.size(); x++) cout<<LHS_str[x]<<" ";
//        cout<<endl;
//        for(int x=0; x<RHS_str.size(); x++) cout<<RHS_str[x]<<" ";
//        cout<<endl;

        ///equqation before previous portion was >> 2x-4+5x+300-98x=0
        ///after the portion  >> -91x+296=0, now we have to take constant portion to RHS
        ///after taking to RHS  >> -91x = -296, that means we have to negate the constant value that we get

        constantValue = -constantValue;

        //‘IMPOSSIBLE’ or ‘IDENTITY’
        if( xValue==0 && constantValue ==0 ) cout<<"IDENTITY"<<endl;
        else if( xValue==0 ) cout<<"IMPOSSIBLE"<<endl;
        else printf("%d\n", (int)floor((double)constantValue/xValue));



    }


    return 0;
}

