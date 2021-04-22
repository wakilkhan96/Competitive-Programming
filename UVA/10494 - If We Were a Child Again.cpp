#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    //freopen("out today.txt","w",stdout);
    char num1[20000];
    long long num2;
    char c;
    while( scanf("%s %c %lld", &num1, &c, &num2)!=-1 )
    {
        //cout<<num1<<" "<<num2<<endl;
        if(!strcmp(num1,"0") || num2 == 0)
        {
            printf("0\n");
            continue;
        }

        char result[100000];
        int length = strlen( num1 );
        long long  sum = 0; int y = 0;
        for(int x=0; x<length; x++)
        {
             sum = sum*10 + (num1[x]- '0');
             result[y++] = sum/num2 + '0';
             sum %=num2;

        }
        result[y] = '\n';

        if(c == '%')
        {
            printf("%lld\n", sum) ;
        }
        else
        {
            int  x = 0; int length = strlen(result);
            while(result[x]=='0')
            {
                x++;
                if(result[x]=='\n')printf("0");
            }
            //if(x>=length-1)printf("0\n");
            while(result[x]!='\n')printf("%c", result[x++]);
            printf("\n");

        }

        //if(b=='/')


    }
    return 0;
}
