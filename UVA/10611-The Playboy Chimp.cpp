#include<bits/stdc++.h>
using namespace std;


int _lower_bound(int arr[], int n,int k)
{
    int beg , end , mid;
    beg=0;end=n-1;mid = 0;

    int key = k;
    while(beg<=end)
    {
        mid = (beg+end)/2;
        if(key == arr[mid])
            end = mid-1;
        if(key>arr[mid])beg = mid+1;
        else if(key<arr[mid])end = mid-1;

    }
    return beg;
}

int _upper_bound(int arr[], int n,int k)
{
    int beg , end , mid;
    beg=0;end=n-1;mid = 0;

    int key = k;
    while(beg<=end)
    {
        mid = (beg+end)/2;
        if(key == arr[mid])
            beg = mid+1;
        if(key>arr[mid])beg = mid+1;
        else if(key<arr[mid])end = mid-1;

    }
    return end;
}


int main()
{
    int chimp, luchu;

    scanf("%d", &chimp);
    int achimp[chimp];

    for(int x=0; x<chimp; x++)
        scanf("%d", &achimp[x]);

    scanf("%d", &luchu);
    int aluchu[luchu];

    for(int x=0; x<luchu; x++)
        scanf("%d", &aluchu[x]);

    for(int x=0; x<luchu; x++)
    {

        int low = _lower_bound(achimp,chimp,aluchu[x]);
        int up = _upper_bound(achimp,chimp,aluchu[x]);

        //printf("%d %d\n",low,up);

        if(low>up)
        {
            int t =low;
            low = up;
            up = t;
        }

        if(achimp[low]==achimp[up])
        {
            low--;up++;
        }

        (low>=0)?printf("%d ",achimp[low]):printf("X ");
        (up<=chimp-1)?printf("%d\n",achimp[up]):printf("X\n");


    }


    return 0;
}
