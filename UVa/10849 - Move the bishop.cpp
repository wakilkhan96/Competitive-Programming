#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,test,s1,s2,x,y,z,n;
    scanf("%lld",&t);
    while(t--)
    {
        //printf("\n");
        scanf("%lld",&test);
        scanf("%lld",&n);
        while(test--)
        {
            scanf("%lld %lld %lld %lld",&s1,&s2,&x,&y);
            if( ( abs(s1-s2)+abs(x-y) )%2 )printf("no move\n");
            else if( min(s1,s2)<1 && max(s1,s2)>n )printf("no move\n");
            else if( min(x,y)<1 && max(x,y)>n )printf("no move\n");
            else
            {
                if(abs(s1-x)==0 && abs(s2-y)==0)printf("0\n");
                else if(abs(s1-x)==abs(s2-y))printf("1\n");/// for diagonal movements absolute differences
                else printf("2\n");                        /// of both x and both y between two points remain same
            }
        }
    }
    return 0;
}
