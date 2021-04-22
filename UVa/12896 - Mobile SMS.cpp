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
    int n,t,x,y,z;
    while(scanf("%d",&t)==1)
    {
        for(y=1;y<=t;y++)
        {
            scanf("%d",&n);
            int line1[n],line2[n];
            char msg[n];
            for(x=0;x<n;x++)
            {
                scanf("%d",&z);
                if(z==0)line1[x]=0;
                if(z==1)line1[x]=1;
                if(z==2)line1[x]=96;
                else if(z==3)line1[x]=99;
                else if(z==4)line1[x]=102;
                else if(z==5)line1[x]=105;
                else if(z==6)line1[x]=108;
                else if(z==7)line1[x]=111;
                else if(z==8)line1[x]=115;
                else if(z==9)line1[x]=118;
            }
            for(x=0;x<n;x++)
            {
                scanf("%d",&line2[x]);
                if(line1[x]==0)line2[x]=32;
                if(line1[x]==1)
                {
                    if(line2[x]==1)line2[x]=45;
                    else if(line2[x]==2)line2[x]=43;
                    else if(line2[x]==3)line2[x]=62;
                    else if(line2[x]==4)line2[x]=33;
                }
            }
            for(x=0;x<n;x++)
            {
                if(line1[x]!=32) msg[x]=line1[x]+line2[x];
                else msg[x]=line1[x];
            }
            printf("%s\n",msg);
        }
    }
    return 0;
}
