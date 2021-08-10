#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, nn, cnt(0);
    cin>>n;
    bool got = false;
	while (!got)
	{
		n++;
        cnt++;
        string str = to_string(abs(n));
        int size = str.size();
        for(int i=0; i<size; i++)
        {
            if(str[i]=='8')
            {
                got = true;
                break;
            }
        }
	}

    cout<<cnt<<endl;

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








