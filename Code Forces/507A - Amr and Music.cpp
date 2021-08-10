
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, k, a, sum(0), cnt(0); 
    cin>>n>>k;
    vector<pair<int, int> > v;
    for(int i=0; i<n; i++)
    {
        cin>>a; 
        sum += a;
        v.push_back({a, i+1});
    }
    sort(v.begin(), v.end());

    int vsize = n;
    while(sum>k)
    {
        int last_val = v[vsize-1].first;
        v.pop_back();
        vsize--;
        sum -= last_val;
    }
    cout<<vsize<<"\n";
    for(int i=0; i<vsize; i++) cout<<v[i].second<<" ";
    if(vsize) cout<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








