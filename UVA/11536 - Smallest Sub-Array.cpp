#include <bits/stdc++.h>
using namespace std;
#define exit_loop break

int main()
{
    //freopen("myfile.txt", "w", stdout);
    int test, cou = 1, N, M, K, nth_number;
    vector<int> arr(1000000+1);
    arr[0]=0, arr[1]=1, arr[2]=2, arr[3]=3;
    vector<int> totalCount(1000000+1);
    int leftPointer, rightPointer;
    scanf("%d", &test);
    
    while(test--)
    {
        
        //scanf("%d %d %d", &N, &M, &K);
        cin>>N>>M>>K;
        
        //for(int x=4; x<=N+1; x++) arr[x] = ((arr[x-1]+arr[x-2]+arr[x-3]) % M) + 1;
        totalCount.assign(N+1, 0);
        // int totalCount[N+1];
        // memset(totalCount, 0, sizeof(totalCount));
        
        int totalUnique = 0, minLength = N;
        leftPointer = 1, rightPointer = 1; //starts from index 1

        bool flag = false;
        for(int x=1; x<=N; x++)
        {
            if(x<4) nth_number = arr[x]; 
            else
            {
                arr[x] = ((arr[x-1]+arr[x-2]+arr[x-3]) % M) + 1;
                nth_number = arr[x]; 
            }
            if(nth_number>=1 && nth_number<=K )
            {
                if(totalCount[nth_number]==0) totalUnique++;
                totalCount[nth_number]++;
            }

            rightPointer = x;
            int window_size = rightPointer-leftPointer+1; 
            //printf("x=%d  unq=%d\n", x, totalUnique);
            if(window_size>=K && totalUnique>=K)
            {
                minLength = min(minLength, window_size);
                flag = true;

                while(true)
                {
                    leftPointer++;
                    //trying to remove last element at leftPointer
                    if(arr[leftPointer-1]>=1 && arr[leftPointer-1]<=K && totalCount[ arr[leftPointer-1] ]>0)
                    {
                        //cout<<"worked"<<endl;
                        totalCount[ arr[leftPointer-1] ]--;
                        if(totalCount[ arr[leftPointer-1] ]==0) totalUnique--;
                        if(totalUnique<K) 
                        {
                            totalCount[ arr[leftPointer-1] ]++;
                            leftPointer--;
                            totalUnique++;
                            break;
                        }
                    }

                    window_size = rightPointer-leftPointer+1; 
                    if(window_size<K ) 
                    {
                        leftPointer--;
                        break;
                    }

                    // printf("removed=%d - unique=%d lp=%d\n", arr[leftPointer-1], totalUnique, leftPointer);
                    // printf("x=%d - unique=%d loop\n", x, totalUnique);
                    // for(int i=leftPointer; i<=rightPointer; i++) cout<<" "<<arr[i];
                    // cout<<'\n';
                    minLength = min(minLength, window_size);
                }
            }

        }

        if(flag) printf("Case %d: %d\n", cou++, minLength);
        else printf("Case %d: sequence nai\n", cou++);

    }


}


/*
Sample Input
2
20 12 4
20 12 8

Sample Output
Case 1: 13
Case 2: sequence nai


1
3 1 2

15
20 12 4
20 12 8
3 5 3
1000000 10 12
3 1 2
1000000 1000 100
50 50 50
29 17 11
29 17 33
14 6 3
14365 66 3
353540 233 99
222222 222 22
333333 333 33
100000 555 55

*/