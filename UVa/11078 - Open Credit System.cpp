#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("myfile.txt","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cin.ignore();
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int x=0; x<n; x++) scanf("%d", &arr[x]);
        int maximum = -INT_MAX;
        int diff = -INT_MAX;
        for(int x=0; x<n-1; x++) 
        {
            maximum = max(maximum, arr[x]);
            diff = max(diff, maximum-arr[x+1]);
        }

        cout<<diff<<'\n';
    }
		
}

/*
Sample Input
3
2
100
20
4
4
3
2
1
4
1
2
3
4
Sample Output
80
3
-1

*/