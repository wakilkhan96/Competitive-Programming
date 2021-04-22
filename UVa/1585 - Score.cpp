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
    char word[100000];
    long long int x,counting,score;
    long long int a,b;
    while(scanf("%lld",&a)==1 && a!=0)
    {
        for(b=0;b<a;b++)
        {
            scanf("%s",word);
            score=0;
            counting=0;
            for(x=0;x<strlen(word);x++)
            {
                if(word[x]=='O')
                {
                    counting++;
                    score+=counting;
                }
                else if(word[x]=='X')counting=0;
            }
            printf("%lld\n",score);
        }
    }
    return 0;
}
