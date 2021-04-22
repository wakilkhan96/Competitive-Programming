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
    long long int sum,n,l,x;
    double y;
    char number[1000];
    while(gets(number))
    {
        if(strcmp(number,"0")==0)break;
        else
        {
            l=strlen(number);
            sum=0;
            for(n=0;n<l;n++)
            {
                if(number[n]=='0')continue;
                x=number[n]-'0';
                y=x*(pow(2,(l-n))-1);
                sum+=y;
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
