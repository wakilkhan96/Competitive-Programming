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
    long long int x;
    while(scanf("%lld",&x)==1 && x!=0)
    {
        x=(x*(x+1)*(2*x+1))/6;
        printf("%lld\n",x);
    }
    return 0;
}
