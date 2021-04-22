#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char line[1000];
    while(gets(line))
    {
        for(x=0;x<strlen(line);x++)
        {
            if(line[x]=='2')
                printf("`");
            if(line[x]=='3')
                printf("1");
            if(line[x]=='4')
                printf("2");
            if(line[x]=='5')
                printf("3");
            if(line[x]=='6')
                printf("4");
            if(line[x]=='7')
                printf("5");
            if(line[x]=='8')
                printf("6");
            if(line[x]=='9')
                printf("7");
            if(line[x]=='0')
                printf("8");
            if(line[x]=='-')
                printf("9");
            if(line[x]=='=')
                printf("0");
            if(line[x]=='e' || line[x]=='E')
                printf("q");
            if(line[x]=='r' || line[x]=='R')
                printf("w");
            if(line[x]=='t' || line[x]=='T')
                printf("e");
            if(line[x]=='y' || line[x]=='Y')
                printf("r");
            if(line[x]=='u' || line[x]=='U')
                printf("t");
            if(line[x]=='i' || line[x]=='I')
                printf("y");
            if(line[x]=='o' || line[x]=='O')
                printf("u");
            if(line[x]=='p' || line[x]=='P')
                printf("i");
            if(line[x]=='[')
                printf("o");
            if(line[x]==']')
                printf("p");
            if(line[x]=='\\')///exceptions for backslash character
                printf("[");
            if(line[x]=='d' || line[x]=='D')
                printf("a");
            if(line[x]=='f' || line[x]=='F')
                printf("s");
            if(line[x]=='g' || line[x]=='G')
                printf("d");
            if(line[x]=='h' || line[x]=='H')
                printf("f");
            if(line[x]=='j' || line[x]=='J')
                printf("g");
            if(line[x]=='k' || line[x]=='K')
                printf("h");
            if(line[x]=='l' || line[x]=='L')
                printf("j");
            if(line[x]==';')
                printf("k");
            if(line[x]=='\'')///exceptions for quotation character
                printf("l");
            if(line[x]=='c' || line[x]=='C')
                printf("z");
            if(line[x]=='v' || line[x]=='V')
                printf("x");
            if(line[x]=='b' || line[x]=='B')
                printf("c");
            if(line[x]=='n' || line[x]=='N')
                printf("v");
            if(line[x]=='m' || line[x]=='M')
                printf("b");
            if(line[x]==',')
                printf("n");
            if(line[x]=='.')
                printf("m");
            if(line[x]=='/')
                printf(",");
            if(line[x]==' ')///exceptions
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
