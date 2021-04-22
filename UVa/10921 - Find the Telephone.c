#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char number[40];
    while(scanf("%s",number)==1)
    {
        for(x=0;x<strlen(number);x++)
        {
            if(number[x]=='A' || number[x]=='B' || number[x]=='C')printf("2");
            else if(number[x]=='D' || number[x]=='E' || number[x]=='F')printf("3");
            else if(number[x]=='G' || number[x]=='H' || number[x]=='I')printf("4");
            else if(number[x]=='J' || number[x]=='K' || number[x]=='L')printf("5");
            else if(number[x]=='M' || number[x]=='N' || number[x]=='O')printf("6");
            else if(number[x]=='P' || number[x]=='Q' || number[x]=='R' || number[x]=='S')printf("7");
            else if(number[x]=='T' || number[x]=='U' || number[x]=='V')printf("8");
            else if(number[x]=='W' || number[x]=='X' || number[x]=='Y' || number[x]=='Z')printf("9");
            else printf("%c",number[x]);
        }
        printf("\n");
    }
    return 0;
}
