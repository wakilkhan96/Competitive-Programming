#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        stack<int>s;
        queue<int>q;
        priority_queue<int>pq;
        bool isStack = true, isQueue = true, isPriorityQueue = true;
        while(n--)
        {
            int x, y;
            cin>>x>>y;
            if(x==1)
            {
                s.push(y);
                q.push(y);
                pq.push(y);
            }
            else
            {
                if(isStack)
                {
                    if(!s.empty() && s.top() == y) s.pop();
                    else isStack = false;
                }
                if(isQueue)
                {
                    if(!q.empty() && q.front() == y) q.pop();
                    else isQueue = false;
                }
                if(isPriorityQueue)
                {
                    if(!pq.empty() && pq.top() == y) pq.pop();
                    else isPriorityQueue = false;
                }

            }

        }

        if(isStack && !isQueue && !isPriorityQueue) puts("stack");
        else if(!isStack && isQueue && !isPriorityQueue) puts("queue");
        else if(!isStack && !isQueue && isPriorityQueue) puts("priority queue");
        else if(!isStack && !isQueue && !isPriorityQueue) puts("impossible");
        else puts("not sure");


    }

    return 0;

}

