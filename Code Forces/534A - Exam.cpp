
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
    int n;
    cin>>n; 
    if(n<=2) cout<<"1\n1\n";
    else if(n==3) cout<<"2\n1 3\n";
    else if(n==4) cout<<"4\n2 4 1 3\n";
    else
    {
        cout<<n<<"\n";
        for(int i=1; i<=n; i+=2) cout<<i<<" ";
        for(int i=2; i<=n; i+=2) cout<<i<<" ";
    }
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


