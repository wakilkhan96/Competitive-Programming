#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("myfile.txt","w",stdout);
    //cin.ignore();
    int test;
    cin>>test;
    while(test--)
    {
        int arr[5];
        for(int x=0; x<5; x++) cin>>arr[x];
        sort(arr, arr+5);
        bool flag = true;
        for(int x=1; x<5; x++) if(arr[x]!=arr[x-1]+1) flag &= false;
        if(flag) printf("Y\n");
        else printf("N\n");
    }
	
	
}

/*
Sample Input
5
1 2 3 4 5
2 3 4 5 6
1 4 4 4 5
1 3 4 5 6
1 2 2 3 6
Sample Output
Y
Y
N
N
N
*/