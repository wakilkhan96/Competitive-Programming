#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define pb(x) push_back(x)

int kmp( string text, string pattern)
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

    int pattern_occurrence = 0;
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
            pattern_occurrence++;
            j = lps[j - 1];
        }

        if( text[i]  != pattern[j] )
        {
            if(j!=0) j = lps[j-1];
            else i++;
        }

    }


    return pattern_occurrence;
}

int main()
{
    //freopen("output.txt","w",stdout);
    int test;
    string text, pattern;

    while( getline(cin, text))
    {
        if(text==".")break;
        int pattern_occurrence = 0;
        pattern = text;
        text = text + text;
        pattern_occurrence = kmp( text, pattern );
        cout<<pattern_occurrence-1<<endl;

    }



    return 0;
}
