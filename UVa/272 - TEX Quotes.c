#include<stdio.h>
#include<string.h>
int main()
{
    long long int x,y,count=2;
    char line[100000];
    while(gets(line))
    {
        x=strlen(line);
        for(y=0;y<x;y++)
        {
            if(line[y]=='"')
            {
                if(count%2==0) printf("``");
                else printf("''");
                count++;
            }
            else printf("%c",line[y]);
        }
        printf("\n");
    }
    return 0;
}
