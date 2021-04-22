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
    int p,n,x,y,l;
    int m,a,r,g,i,t;
    char word[10000];
    int pizza[6];
    while(scanf("%d",&p)==1 && p!=0)
    {
        for(n=1;n<=p;n++)
        {
            m=0;a=0;r=0;g=0;i=0;t=0;
            scanf("%s",word);
            l=strlen(word);
            for(x=0;x<l;x++)
            {
                if(word[x]=='M')m++;
                else if(word[x]=='A')a++;
                else if(word[x]=='R')r++;
                else if(word[x]=='G')g++;
                else if(word[x]=='I')i++;
                else if(word[x]=='T')t++;
            }
            a=a/3;r=r/2;
            pizza[0]=m;
            pizza[1]=a;
            pizza[2]=r;
            pizza[3]=g;
            pizza[4]=i;
            pizza[5]=t;

            y=pizza[0];
            for(x=1;x<6;x++)
            {
                if(pizza[x]<y)y=pizza[x];
            }

            printf("%d\n",y);
        }
    }
    return 0;
}
