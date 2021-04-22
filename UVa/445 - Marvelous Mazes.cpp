#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>
using namespace std;
int main()
{
    int l,n,x,y=0;
    char word[1000000];
    while(gets(word))
    {
        l=strlen(word);
        for(x=0;x<l;x++)
        {
            if(word[x]=='!') printf("\n");

            else if(word[x]=='b')
            {
                for(n=1;n<=y;n++)
                {
                    printf(" ");
                }
                y=0;
            }

            else if((word[x]>='A' && word[x]<='Z') || word[x]=='*')
            {
                for(n=1;n<=y;n++)
                {
                    printf("%c",word[x]);
                }
                y=0;
            }

            else if(word[x]!='!' && word[x]!='b')
            {
                y=y+(word[x]-'0');
            }

        }
        printf("\n");
    }
    return 0;
}

