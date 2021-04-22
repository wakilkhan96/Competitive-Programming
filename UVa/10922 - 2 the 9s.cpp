#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,sum;
    char s[1002];
    while(cin>>s)
    {
        if(strcmp(s,"0")==0)return 0;
        int l=strlen(s);
        sum=0;
        for(x=0;x<l;x++)sum+=s[x]-'0';
        //cout<<sum<<endl;
        if(sum%9==0)
        {
            y=1;
            while(sum>9)
            {
                z=0;
                while(sum!=0)
                {
                    z+=sum%10;
                    sum/=10;
                }
                sum=z;
                y+=1;
                //cout<<sum<<endl;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",s,y);
        }
        else
        {
            printf("%s is not a multiple of 9.\n",s);
        }
    }
    return 0;
}
