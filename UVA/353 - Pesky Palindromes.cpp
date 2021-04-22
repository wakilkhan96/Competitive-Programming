#include<bits/stdc++.h>
using namespace std;
#define set(x) memset(x,0,sizeof(x))
typedef long long ll;
bool checker;
ll alp[26];
set<string>word;
int main()
{
    //freopen("myfile.txt","w",stdout);
    ll _x,_y,x,y,z,len,uniq,i,j,mid;
    string s;
    char temp[100];
    while(cin>>s)
    {
        set(alp);len=uniq=0;
        for(x=0; s[x]!='\0'; x++)
        {
            if(!alp[s[x]-'a'])
            {
                alp[s[x]-'a']++;uniq++;
            }
            len++;
        }

        /*for(x=0;x<26;x++)printf("%c ",97+x);cout<<endl;
        for(x=0;x<26;x++)printf("%lld ",alp[x]);cout<<endl<<uniq<<endl;
        */
        //cout<<len<<endl;
        for(x=0; x<len; x++)
        {
            char c=s[x];
            for(y=x+1;s[y]!='\0';y++)
            {
                if(s[y]==c)
                {
                    _x=x;_y=y;mid=(_x+_y+1)/2;
                    checker=true;
                    for(i=_x,j=_y; i<mid && checker ; i++,j--)
                    {
                        if(s[i]!=s[j])checker=false;
                        //printf("%c =!= %c\n",s[i],s[_y]);
                    }

                    if(checker)
                    {
                        ll n=0;
                        for(z=x; z<=y; z++)temp[n++]=s[z];
                        temp[n]='\0';
                        //cout<<"---"<<temp<<endl;
                        word.insert(temp);
                    }

                }
            }
        }

        //cout<<uniq<<" "<<word.size()<<endl;
        printf("The string '");
        cout<<s;
        printf("' contains %lld palindromes.\n",uniq+word.size());

        word.clear();
    }

    return 0;
}

