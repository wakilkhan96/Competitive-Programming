#include<bits/stdc++.h>
using namespace std;

string s1 = "qwertyuiop";
string s2 = "asdfghjkl;";
string s3 = "zxcvbnm,./";

void solve()
{
    int d = 0, size;
    string str;
    char ch;

    cin>>ch;
    cin>>str;

    if(ch=='R') d = -1;
    else d = 1;
    size = str.size();

    
    for(int x=0; x<size; x++)
    {
        bool got = false;
        //cout<<str[x]<<"\n";
        for(int y=0; y<10 && !got; y++)
        {
            //cout<<s1[y]<<"\n";
            if(s1[y]==str[x]) 
            {
                cout<<s1[y+d];
                got = true;
                break;
            }
        }
        //cout<<"done1"<<endl;
        for(int y=0; y<10 && !got; y++)
        {
            //cout<<s2[y]<<"\n";
            if(s2[y]==str[x])
            {
                cout<<s2[y+d];
                got = true;
                break;
            }
        }
        //cout<<"done2"<<endl;
        for(int y=0; y<10 && !got; y++)
        {
            //cout<<s3[y]<<"\n";
            if(s3[y]==str[x])
            {
                cout<<s3[y+d];
                got = true;
                break;
            }
        }
        //cout<<"done3\n"<<endl;
    }
    cout<<"\n";    
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








