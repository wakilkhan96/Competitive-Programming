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
    long long int a,b,m,n,x,y,call_duration,mile,juice,case_num=1;
    while(scanf("%lld",&a)==1 && a!=0)
    {
        for(m=1;m<=a;m++)
        {
            scanf("%lld",&b);
            mile=0;
            juice=0;
            for(n=1;n<=b;n++)
            {
                x=0;y=0;
                scanf("%lld",&call_duration);
                if(call_duration>=30)
                {
                    x=(call_duration/30)+1;
                }
                else x=1;
                mile+=x*10;

                if(call_duration>=60)
                {
                    y=(call_duration/60)+1;
                }
                else y=1;
                juice+=y*15;
            }
            if(mile==juice) printf("Case %lld: Mile Juice %lld",case_num,juice);
            else if(mile<juice) printf("Case %lld: Mile %lld",case_num,mile);
            else if(mile>juice) printf("Case %lld: Juice %lld",case_num,juice);
            printf("\n");
            case_num++;
        }
    }
    return 0;
}

