#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,i,j,n,x,count,cycle,number;
    while(scanf("%ld%ld",&i,&j)==2 && i+j!=0)
    {
        if(i>j)swap(i,j);
        cycle=0;number=1;
        for(x=i;x<=j;x++)
        {
            n=x;
            count=0;
            while(1)
            {
                if(n%2!=0)
                    n=3*n+1;
                else
                    n=n/2;
                count++;
                if(n<=1)break;
            }
            if(count>cycle)
            {
                cycle=count;
                number=x;
            }
        }
        printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.",i,j,number,cycle);
        printf("\n");
    }
    return 0;
}
