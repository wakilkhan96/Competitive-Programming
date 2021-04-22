#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
    char word[21];
    while(gets(word))
    {
        int l=strlen(word);
        for(int x=0;x<l;x++)
        {
            int y=word[x]-65;
            if(x>0 && ara[word[x-1]-65]==ara[y])continue;
            if(ara[y]>0)cout<<ara[y];
        }
        cout<<endl;
    }
    return 0;
}
