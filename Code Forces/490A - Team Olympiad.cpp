#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    vector<int> sub1, sub2, sub3;

    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>t;
        if(t==1) sub1.push_back(i+1);
        else if(t==2) sub2.push_back(i+1);
        else sub3.push_back(i+1);
    }

    n = min(min(sub1.size(), sub2.size()), sub3.size());
    cout<<n<<"\n";
    for(int i=0; i<n; i++)
    {
        cout<<sub1[i]<<" "<<sub2[i]<<" "<<sub3[i]<<"\n";
    }
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








