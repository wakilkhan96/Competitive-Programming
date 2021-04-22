#include <bits/stdc++.h>
using namespace std;
#define MAXN 2000000  
typedef long long ll;


int main()
{
    //freopen("myfile.txt", "w", stdout);
    int n, s;
    while(scanf("%d %d",&n, &s)!=EOF)
    {
        int arr[n];
        for(int x=0; x<n; x++) scanf("%d", &arr[x]);

        bool flag = false;
        int leftPointer, rightPointer, sum, length;
        sum = 0, length = n;
        leftPointer = 0, rightPointer = 0;
        for(rightPointer=0; rightPointer<n; rightPointer++)
        {
            sum += arr[rightPointer];
            while(sum>=s)
            {
                flag = true;
                length = min(length, rightPointer-leftPointer+1);
                sum -= arr[leftPointer++];
            }
        }

        if(!flag) length = 0;
        printf("%d\n", length);
    }
    
}




/*
Sample Input
10 15
5 1 3 5 10 7 4 9 2 8
5 11
1 2 3 4 5

Sample Output
2
3

strategy:
Title : a given sequence, the sequence of elements required to obtain the shortest sequence length and less than k.
iterate through the sequence and when sum>=s then check if (sum-previus_elemests) is also grater or equal to s;
to remove previous elements from sum a leftPointer is used, increase the leftPointer until sum-arr[leftpoinnter++]>=s.
and minimum length is min(length, rightPointer-leftPointer+1).

*/