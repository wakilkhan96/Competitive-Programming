#include <bits/stdc++.h>
using namespace std;
#define limit 1000000
long long num[limit];
void prime()
{
    long long a,b,c,d;
    num[0]=num[1]=1;c=sqrt(limit);
    for(a=2;a<=c;a++){
        if(num[a]==0){
            for(b=2;a*b<=limit;b++)num[a*b]=1;
        }
    }
}
int main()
{
	long long t,n1,n2,x,y,z,divisor,count;
	prime();
	cin>>t;
	while(t--)
    {
        cin>>n1>>n2;
        long long i=n1,j=n2;
        if(n1>n2)swap(n1,n2);
        long long max_d=0,max_n=n1;
        for(x=n1;x<=n2;x++)
        {
            z=x;
            divisor=1;
            for(y=2;y<limit;y++)
            {
                count=0;
                if(num[y]==1)continue;
                while(z%y==0 && z>1)
                {
                    z=z/y;
                    count++;
                }
                divisor*=(count+1);
                if(z==1)break;
            }
            if(divisor>max_d)
            {
                max_d=divisor;max_n=x;
            }
        }
        cout<<"Between "<<i<<" and "<<j<<", "<<max_n<<" has a maximum of "<<max_d<<" divisors."<<endl;
    }
	return 0;
}
