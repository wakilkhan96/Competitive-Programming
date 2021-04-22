#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while( scanf("%d", &n)==1 && n )
    {
        //cin.ignore(true, '\n');
        int arr[n][n], col[n], row[n];
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        for(int x=0; x<n; x++)
        {
            for(int y=0; y<n; y++)
            {
                scanf("%d", &arr[x][y]);
                if( arr[x][y] == 1 )
                {
                    row[x]++;
                    col[y]++;
                }
            }
        }///end_input

//        for(int x=0; x<n; x++)
//        {
//            for(int y=0; y<n; y++) cout<<arr[x][y];
//            cout<<endl;
//        }///end_input
//        cout<<endl;
//        for(int y=0; y<n; y++) cout<<row[y]<<" ";
//        cout<<endl;
//        for(int y=0; y<n; y++) cout<<col[y]<<" ";
//        cout<<endl;


        int faulty_row, faulty_col;
        int cou_row = 0, cou_col = 0;
        for(int x=0; x<n; x++)
        {
            if(row[x]%2)
            {
                faulty_row = x;
                cou_row++;
            }

            if(col[x]%2)
            {
                faulty_col = x;
                cou_col++;
            }
        }

        if(cou_row==0 && cou_col==0) printf("OK\n");
        else if(cou_row==1 && cou_col==1) printf("Change bit (%d,%d)\n", faulty_row+1, faulty_col+1);
        else printf("Corrupt\n");


    }

  return 0;
}

