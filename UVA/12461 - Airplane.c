#include<stdio.h>
int main(int n)
{
    while(scanf("%d",&n)==1 && n!=0)
    {
        if(n>=2 && n<=1000)
        {
            printf("1/2\n");
        }
    }
    return 0;
}
