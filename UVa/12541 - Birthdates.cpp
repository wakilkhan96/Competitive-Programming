#include<bits/stdc++.h>
using namespace std;
int main()
{
    static long long int t,n,x,y,z,age,young,old;
    char y_p[100],o_p[100],name[100];
    scanf("%lld",&t);
    for(n=1;n<=t;n++)
    {
        scanf("%s",name);
        scanf("%lld %lld %lld",&x,&y,&z);
        age=x+(y*31)+(z*12*31);
        if(n==1)
        {
            young=old=age;
            strcpy(y_p,name);
            strcpy(o_p,name);
        }
        else
        {
            if(age>young)
            {
                strcpy(y_p,name);
                young=age;
            }
            if(age<old)
            {
                strcpy(o_p,name);
                old=age;
            }
        }
    }
    printf("%s\n%s\n",y_p,o_p);
    return 0;
}
