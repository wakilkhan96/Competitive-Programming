#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    char msg[1000];
    while(gets(msg))
    {
        for(x=0;x<strlen(msg);x++)
        {
            printf("%c",msg[x]-7);
        }
        printf("\n");
    }
}
