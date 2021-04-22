#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, i, temp;
    cin>>test;
    getchar();
    while(test--)
    {
        string str;
        getchar();
        getline(cin, str);
        int arr[10000];
        istringstream iss(str);
        i = 0;
        while(iss>>arr[i]) i++;
        int arr_size = i;

        getline(cin, str);
        stringstream ss(str);
        string s_arr[10000];
        i = 0;
        while(ss >> s_arr[arr[i]-1]) i++;

        for(int x=0; x<arr_size; x++) cout<<s_arr[x]<<'\n';
        
        if(test) printf("\n");
    }
    
    return 0;
}


/*
Sample Input
1

3 1 2
32.0 54.7 -2
Sample Output
54.7
-2
32.0

*/