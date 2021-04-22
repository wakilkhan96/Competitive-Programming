#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    char s[26];
    int n,cou,_min;


    while( 1 )
    {
        cin>>n;

        if(n==0)break;
        int ara[n+2];
        _min=999999;

        for(int i=0;i<n;i++)
        {

            cou=0;
            for(int x=0;x<25;x++)
            {
                scanf("%c",&s[x]);
                if(s[x]==' ')cou++;

            }
            getchar();


            ara[i]=cou;
            _min=min(_min,cou);


        }

        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=abs(ara[i]-_min);
        }

        printf("%d\n",total);




    }

    return 0;

}
