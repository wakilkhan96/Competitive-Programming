#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define pb(x) push_back(x)

int compute_prefix(int n, string str)
{
    vector<int>phi(n);
    int k=0;
    for(int i=1;i<n;i++)
    {
        while(k>0 && str[i]!=str[k]) k=phi[k-1];
        if(str[i]==str[k]) k++;
        phi[i]=k;
    }
    return phi[n-1]-1;
}

int main()
{

    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        string str;
        cin>>str;
        int aa=str.size();
        int n=compute_prefix(aa,str);
        int ans=aa-n-1;
        if(aa%ans==0)
            cout<<ans<<endl;
        else
            cout<<aa<<endl;
        if(z<t)
            cout<<endl;
    }


    return 0;
}
