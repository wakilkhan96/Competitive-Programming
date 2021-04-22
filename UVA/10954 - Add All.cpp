#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, total, ans;
    priority_queue<int, vector<int>,greater<int> > pq;
    while(1)
    {
        cin>>n;
        if(n==0) return 0;
        total = 0, ans = 0;

        while(n--) cin>>x, pq.push(x);

        while(pq.size()!=1)
        {
            total = 0;
            for(x=0; x<2; x++) total += pq.top(), pq.pop();
            ans += total;
            pq.push(total);
        }
        cout<<ans<<endl;
        pq.pop();
    }
    return 0;
}
