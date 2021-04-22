#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define pb(x) push_back(x)


int main()
{
    int test;
    cin>>test;
    cin.ignore(true, '\n');

    while(test--)
    {
        string str, str1, str2, str3, str4;
        getline(cin, str);
        int length = str.length();
        int n=ceil(sqrt( length ) );
        int m=sqrt( length );
        if( m != n )
        {
            cout<<"INVALID"<<endl;
            continue;
        }

        string code = "";

        for(int x=0; x<n; x++)
        {
            for(int y=x; y<length; y+=n) code += str[y];
        }

        cout<<code<<endl;

//        ///or
//        string ans = "";
//        for(int i=0; i<n; i++)
//        {
//            for(int j=i; j<length; j+=n) ans += str[j];
//        }
//        cout<<ans<<endl;
//        ///by arunima mondol

    }


    return 0;
}

