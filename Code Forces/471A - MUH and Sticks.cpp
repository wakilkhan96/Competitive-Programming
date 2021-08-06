#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a,pair<int, int>& b)
{
    return a.second < b.second;
}

void solve()
{
    int n, x, levels, cou(0), head, body, leg = 0;
    vector<int> v(6);
    map<int, int> mp;
    
    for(int i=0; i<6; i++)
    {
        cin >>v[i];
        mp[v[i]]++;
        if(mp[v[i]]>=4) leg = v[i];
    }

    int leg_count = 4;
    if(leg)
    {
        vector<int> head_body;
        for(int i=0; i<6; i++)
        {
            if(v[i]==leg && leg_count>0) leg_count--;
            else head_body.push_back(v[i]);
        }
        if(head_body[0]==head_body[1]) cout<<"Elephant\n";
        else cout<<"Bear\n";
    }
    else cout<<"Alien\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








