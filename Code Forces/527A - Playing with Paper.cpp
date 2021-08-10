
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

long long origami(long long a, long long b)
{
    long long cnt = 0LL;
    while(a && b)
    {
        if(a<b) swap(a, b);
        cnt += a/b;
        a = a%b; 
        //cout<<"-\n";
    }
    return cnt;
}
void solve()
{
    long long n, a, b; 
    cin>>a>>b; 
    cout<< origami(a, b);
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*
let input is 11 2, hence a=11 and b=2

***********
***********
we can fold 2 size square for 5 times, untill we have to rotate the paper to fold again.
* ** ** ** ** **
* ** ** ** ** **
after 5 foldings we will have a paper of size a=1 b=2,
*
*
now we will rotate the paper, so a=2 b=1, procedure gets going same way
**

*/