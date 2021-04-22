#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    int n,cou,_min;
    int days,hartal[10000],t;

    while( scanf("%d",&n)==1 )
    {

        //if(n==0)break;

        for(int a=0;a<n;a++)
        {
            cin>>days>>t;
            for(int b=0;b<t;b++)cin>>hartal[b];


            int cou=0;
            bool invalid;

            for(int x=1;x<=days;x++)
            {
                invalid = false;
                if(x%7==6 || x%7==0)continue;

                for(int y=0;y<t;y++)
                {
                    if(x>=hartal[y] && x%hartal[y]==0)
                    {
                        invalid=true;

                        //printf("day = %d  parameter = %d\n",x,hartal[y]);
                    }

                }

                if(invalid)cou+=1;
                //printf("%d\n",cou);

            }

            printf("%d\n",cou);
        }



    }

    return 0;

}

