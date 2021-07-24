#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, nn, test, score;
    cin>>n;
    nn = n;
    string name;

    map<string, int> name_score;
    map<string, int>::iterator it;
    vector< pair<string, int> > name_score_history;
    map<string, int> max_scorer;
    map<string, int>:: iterator ite;
    int max_score = -INT_MAX; 
    
    while(n--)
    {
        cin>>name>>score;
        name_score[name] += score;
        name_score_history.push_back(make_pair(name, score));
    }

    it = name_score.begin();
    max_score = it->second;
    max_scorer[it->first]++;

    for(it = name_score.begin(); it!=name_score.end(); it++)
    {
        if(it->second > max_score)
        {
            max_scorer.clear();
            max_score = it->second;
            max_scorer[it->first]++;
        }
        else if(it->second == max_score) 
            max_scorer[it->first]++;
    }

    ite = max_scorer.begin();
    string winner = ite->first;

    int m;
    if(max_scorer.size()>1) m = max_score;
    map<string, int> name_score_2;

    for(int x=0; x<nn; x++)
    {
        name = name_score_history[x].first;
        score = name_score_history[x].second;
        if(max_scorer[name]>0)
        {
            name_score_2[name] += score;
            if(name_score_2[name] >= m)
            {
                winner = name;
                break;
            }
        }
        
    }

    cout<<winner<<'\n';

}



/*
4
a 12
b 7
b 3
a -12

4
a 12
b 7
b 3
a -2

*/