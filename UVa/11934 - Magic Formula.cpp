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
    long long int a,b,c,d,l,f,x,count;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l)==5 && d!=0)
    {
        count=0;
        for(x=0;x<=l;x++)
        {
            f=(a*x*x)+(b*x)+c;
            if(f%d==0)count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}















