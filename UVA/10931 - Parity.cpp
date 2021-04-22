#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int n,x,z,count;
    char y,num[1000];
    while(scanf("%lu",&n)==1 && n!=0)
    {
        x=0;count=0;
        while(n!=0)
        {
            y=n%2;
            if(y==1)count++;
            num[x++]='0'+y;
            n=n/2;
        }
        num[x]='\0';
        reverse(num,num+x);
        printf("The parity of %s is %lu (mod 2).\n",num,count);
    }
    return 0;
}
