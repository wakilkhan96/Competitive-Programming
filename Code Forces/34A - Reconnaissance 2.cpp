#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int, int> >arr;
    int n, temp;
    cin>>n;
    for(int x=0; x<n; x++) cin>>temp, arr.push_back(make_pair(temp, x+1));
    //sort(arr.begin(), arr.end());
    int minA, minB, min_diff = INT_MAX;
    for(int x=1; x<n; x++)
    {
        int diff = abs(arr[x].first-arr[x-1].first);
        if(diff<min_diff){
            min_diff = diff;
            minB = arr[x].second;
            minA = arr[x-1].second;
        }
    }
    int diff = abs(arr[0].first-arr[n-1].first);
    if(diff<min_diff){
        min_diff = diff;
        minB = arr[0].second;
        minA = arr[n-1].second;
    }

    //if(minA<minB) swap(minA, minB);
    cout<<minA<< " " <<minB<<'\n';
}
