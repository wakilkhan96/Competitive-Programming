#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll top,bottom,up,down,lefty,righty,temp;

void north()
{
    temp=top;
    top=down;
    down=bottom;
    bottom=up;
    up=temp;
}
void south()
{
    temp=top;
    top=up;
    up=bottom;
    bottom=down;
    down=temp;
}
void west()
{
    temp=top;
    top=righty;
    righty=bottom;
    bottom=lefty;
    lefty=temp;
}
void east()
{
    temp=top;
    top=lefty;
    lefty=bottom;
    bottom=righty;
    righty=temp;
}

int main()
{
    ll x,y,z,n;
    string s;
    queue<string>q;
    while(cin>>n && n)
    {
        while(n--)
        {
            cin>>s;
            q.push(s);
        }
        top=1;up=2;lefty=3;bottom=6;down=5;righty=4;
        while(!q.empty())
        {
            s=q.front();
            if(s=="north")north();
            else if(s=="south")south();
            else if(s=="east")east();
            else if(s=="west")west();

            q.pop();
        }
        cout<<top<<endl;
    }

    return 0;
}

