#include <bits/stdc++.h>
using namespace std;
#define INF 999999999999999

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n, m, k, city, c, a, b, d;
    cin>>t;
    while(t--) {
        cin>>n>>m>>k;
        priority_queue< pair<long, long>, vector<pair<long, long> >, greater<pair<long, long> > > pq;
        vector<long long> cost(n+1, LLONG_MAX);
        vector<pair<long, long> > adj[n+1];
        for(int i=0; i<k; i++) {
            cin>>city>>c;
            cost[city] = c;
            pq.push({c, city});
        }
        for(int i=0; i<m; i++) {
            cin>>a>>b>>d;
            adj[a].push_back({d, b});
            adj[b].push_back({d, a});
        }

        while(!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            for(auto ch: adj[u]) {
                int v = ch.second;
                long long ec = ch.first;
                if(cost[u]+ec < cost[v]) {
                    cost[v] = cost[u]+ec;
                    pq.push({cost[v], v});
                }
            }
        }

        for(int i=1; i<=n; i++) {
            cout<<cost[i]<<" ";
        }
        cout<<"\n";

    }
}


/*
2
3 2 2
1 5
2 10
1 2 6
2 3 9
3 2 2
1 5
2 10
1 2 1
2 3 9

if we can find out minimum cost[i] to reach all the cities(i) from hospitals(assume them as source),
    then from city(i) all citizens will need only cost(i) to have corona test
*/
