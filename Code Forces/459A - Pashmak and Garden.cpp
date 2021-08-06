#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    cin>>x1>>y1>>x2>>y2;


    if(x1==x2 && y1!=y2)
    {
        int diff=abs(y1-y2);
        x3 = x1+diff; y3 = y1;
        x4 = x2+diff; y4 = y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
    }
    else if(y1==y2 && x1!=x2 )
    {
        int diff=abs(x1-x2);
        y3 = y1+diff; x3 = x1; 
        y4 = y2+diff; x4 = x2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
    }
    else if(abs(x1-x2) == abs(y1-y2) )
    {
        x3=x1; y3=y2;
        x4=x2; y4=y1;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
    }
    else cout<<"-1\n";

	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








