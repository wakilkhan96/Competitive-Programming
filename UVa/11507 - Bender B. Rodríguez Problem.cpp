#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,string>bend;

void _do()
{

    bend["+x to +y"] = "+y";
    bend["+x to -y"] = "-y";
    bend["+x to +z"] = "+z";
    bend["+x to -z"] = "-z";
    bend["-x to +y"] = "-y";
    bend["-x to -y"] = "+y";
    bend["-x to +z"] = "-z";
    bend["-x to -z"] = "+z";
    bend["+y to +y"] = "-x";
    bend["+y to -y"] = "+x";
    bend["+y to +z"] = "+y";
    bend["+y to -z"] = "+y";
    bend["-y to +y"] = "+x";
    bend["-y to -y"] = "-x";
    bend["-y to +z"] = "-y";
    bend["-y to -z"] = "-y";
    bend["+z to +y"] = "+z";
    bend["+z to -y"] = "+z";
    bend["+z to +z"] = "-x";
    bend["+z to -z"] = "+x";
    bend["-z to +y"] = "-z";
    bend["-z to -y"] = "-z";
    bend["-z to +z"] = "+x";
    bend["-z to -z"] = "-x";

}



int main()
{

    _do();

    int n;
    while(cin>>n)
    {
        if(!n)break;
        string cur,des,qry;
        cur="+x";
        des="";
        qry="";
        for(int x=0;x<n-1;x++)
        {
            cin>>des;
            if(des!="No")
            {
                qry=cur+" to "+des;
                cur=bend[qry];

            }
        }

        cout<<cur<<endl;


    }

    return 0;
}
