#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(); cin.tie(); cout.tie(0);
using namespace std;
 
int S, B, L, R;
int LS[100010];
int RS[100010];
 
int main() 
{
	fast_io;
	while(true) 
	{
		cin>>S>>B;
		if(S == 0 & B == 0) break;
		for(int i = 0; i < S + 1; i++) 
		{
			LS[i] = i - 1;
			RS[i] = i + 1;
		}
		for(int i = 0; i < B; i++) 
		{
			cin>>L>>R;
			if(LS[L] < 1) printf("* ");
			else cout<< LS[L] <<" ";
			if(RS[R] > S) printf("*\n");
			else cout<< RS[R] <<"\n";

			LS[RS[R]] = LS[L]; //as i know the right child of R, but dont know the left
			RS[LS[L]] = RS[R]; //as i know the left child of L, but dont know the right
		}
		cout<<"-\n";
	}
}