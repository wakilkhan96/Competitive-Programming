#include<bits/stdc++.h>
using namespace std;

int fastExpo(int B, int P, int M) 
{
	if(B==0) return 0;
	if(P==0) return 1;
	int y=0; 
	
	if(P%2==0)
	{
		y=fastExpo(B, P/2, M);
		return ((y%M)*(y%M))%M;
	}
	else
	{
		y=fastExpo(B, P-1, M);
		return ((B%M)*(y%M))%M;
	}
} 
 

int main () 
{ 
	int B,P,M; 
	while(cin>>B>>P>>M)
	{
		cout<<fastExpo(B,P,M)<<'\n';
	} 
	return 0; 
}

// https://vjudge.net/user/SantiagoMaya1234