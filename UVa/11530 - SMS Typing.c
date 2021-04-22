#include<stdio.h>
#include<string.h>
int main()
{
    int n,x,y,count=1,sum;
    char c,msg[100];
    while(scanf("%d%c",&n,&c)==2)
    {
        /*after entering a value for n when ENTER is pressed gets() take Enter as string that should be avoided*/
        for(y=1;y<=n;y++)
        {
            gets(msg);
            sum=0;

            for(x=0;x<strlen(msg);x++)
            {
            if((msg[x]=='a')||(msg[x]=='d')||(msg[x]=='g')||(msg[x]=='j')||(msg[x]=='m')||(msg[x]=='p')||(msg[x]=='t')||(msg[x]=='w')||(msg[x]==' '))
                sum+=1;
            else if((msg[x]=='b')||(msg[x]=='e')||(msg[x]=='h')||(msg[x]=='k')||(msg[x]=='n')||(msg[x]=='q')||(msg[x]=='u')||(msg[x]=='x'))
                sum+=2;
            else if((msg[x]=='c')||(msg[x]=='f')||(msg[x]=='i')||(msg[x]=='l')||(msg[x]=='o')||(msg[x]=='r')||(msg[x]=='v')||(msg[x]=='y'))
                sum+=3;
            else if((msg[x]=='s')||(msg[x]=='z'))
                sum+=4;
            }
            printf("Case #%d: %d\n",count,sum);
            count++;
        }

    }
    return 0;
}
