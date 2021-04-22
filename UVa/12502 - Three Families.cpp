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
    double n,t,w,x,y,z;
    while(scanf("%lf",&t)==1)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%lf%lf%lf",&x,&y,&z);
            w=z/(x+y);
            w=w*(x+(x-y));
            if(w<0) printf("0\n");
            else printf("%.0lf\n",w);
        }
    }
    return 0;
}
