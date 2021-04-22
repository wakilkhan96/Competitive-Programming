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
    long long int t,n,d1,d2,m1,m2,y1,y2,age,case_num=1;
    while(scanf("%lld",&t)==1 & t!=0)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%lld/%lld/%lld",&d2,&m2,&y2);
            scanf("%lld/%lld/%lld",&d1,&m1,&y1);
            if(d2<d1)m1+=1;
            if(m2<m1)y1+=1;
            age=y2-y1;
            if(age<0)printf("Case #%lld: Invalid birth date\n",case_num);
            else if(age>130)printf("Case #%lld: Check birth date\n",case_num);
            else printf("Case #%lld: %lld\n",case_num,age);
            case_num++;
        }
    }
    return 0;
}
