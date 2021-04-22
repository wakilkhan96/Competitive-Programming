#include <stdio.h>
#include <string.h>
int main()
{
    int count=1;
    char word[80];
    while (gets(word))
        {
            if (strcmp(word,"#")==0)
                break;
            if(strcmp(word,"HELLO")==0)
                printf("Case %d: ENGLISH\n",count);
            else if(strcmp(word,"HOLA")==0)
                printf("Case %d: SPANISH\n",count);
            else if(strcmp(word,"HALLO")==0)
                printf("Case %d: GERMAN\n",count);
            else if(strcmp(word,"BONJOUR")==0)
                printf("Case %d: FRENCH\n",count);
            else if(strcmp(word,"CIAO")==0)
                printf("Case %d: ITALIAN\n",count);
            else if(strcmp(word,"ZDRAVSTVUJTE")==0)
                printf("Case %d: RUSSIAN\n",count);
            else
                printf("Case %d: UNKNOWN\n",count);
            count++;
        }
    return 0;
}
