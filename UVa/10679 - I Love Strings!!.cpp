#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define pb(x) push_back(x)

bool kmp( string text, string pattern)
{
    int length_text = text.length();
    int length_pattern = pattern.length();

    int lps[ length_pattern ];
    memset( lps,0,sizeof(lps) );

    for(int j=0, i=1; i<length_pattern; )
    {
        if( pattern[i]  == pattern[j] )
        {
            lps[i] = j+1;
            j++;
            i++;
        }
        else
        {
            if(j!=0) j = lps[j-1];
            else lps[i] = 0, i++;
        }

    }


    for(int j=0, i=0; i<length_text; )
    {
        if( text[i]  == pattern[j] )
        {
            j++;
            i++;
        }

        if( j == length_pattern )
        {
            //printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
            return true;
        }

        if( text[i]  != pattern[j] )
        {
            if(j!=0) j = lps[j-1];
            else i++;
        }

    }


    return false;
}

int main()
{
    int test, cas;
    cin>>cas;
    cin.ignore(true, '\n');
    while(cas--)
    {
        string text;
        getline(cin, text);

        cin>>test;
        cin.ignore(true, '\n');
        while(test--)
        {
            string pattern;
            getline(cin, pattern);
            if( kmp( text, pattern ) ) cout<<"y"<<endl;
            else cout<<"n"<<endl;

        }

    }



    return 0;
}

